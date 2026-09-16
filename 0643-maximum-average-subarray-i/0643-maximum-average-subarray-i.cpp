class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //contiguous subarray
        //fixed length k
        //so sliding window
        double sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxi=sum;
        int left=0;
        int right=k-1;
        while(right<nums.size()-1){
            sum-=nums[left];
            left++;
            right++;
            sum+=nums[right];
            if(maxi<sum) maxi=sum;
        }
        return maxi/k;
    }
};