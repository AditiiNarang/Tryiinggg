class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        // grumpy[i] == 0 means owner is NOT grumpy,
        // so customers entering at this minute are already satisfied.
        // sum = customers who are already satisfied normally.
        // we need customers who are not satisfied normally
        // So we can do customer[i]=0 when customers are satisfied
        // So in customer array only those values will be there when customer is not satisfied.
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
//T.C. = O(n)