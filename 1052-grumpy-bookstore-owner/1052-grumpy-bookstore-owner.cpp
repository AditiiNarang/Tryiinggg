class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int sum=0;
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0){
                sum+=customers[i];
            }
        }
        for(int i=0;i<grumpy.size();i++){
            if(grumpy[i]==0)
                customers[i]=0;
        }
        //Sliding window
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