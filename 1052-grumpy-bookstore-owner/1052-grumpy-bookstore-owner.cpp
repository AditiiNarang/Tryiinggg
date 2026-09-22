class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // grumpy[i] == 0 means the owner is NOT grumpy,
        // so customers entering at this minute are already satisfied.
        // sum = total customers who are already satisfied normally.

        // We don't need to include these customers in the sliding window,
        // because they are satisfied even without using the secret technique.
        // So, set customers[i] = 0 for these positions.

        // After this, customers array contains only those customers
        // who are NOT satisfied normally and can be satisfied
        // using the secret technique.
        int sum=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0){
                sum+=customers[i];
                customers[i]=0;
            }
        }
        // Sliding Window
        // fixed size is 'minutes'
        // So, Fixed Size Sliding Window.
        int windowsum=0;
        for(int i=0;i<minutes;i++){
            windowsum+=customers[i];
        }
        int maxi=windowsum;
        int left=0,right=minutes-1;
        while(right<customers.size()-1){
            windowsum-=customers[left];
            left++;
            right++;
            windowsum+=customers[right];
            maxi=max(maxi,windowsum);
        }
        return sum+maxi;
    }
};
//T.C. = O(n) + O(minutes) + O(n-minutes) = O(2n) = O(n)
//S.C. = O(1)