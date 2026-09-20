class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        //Subarray
        //We need the minimum length subarray
        //whose sum is >= target.
        //i.e. Condition is given.
        //Size of the window is not fixed
        //So, Variable Size Sliding Window.
        int left=0,right=0;int ans=INT_MAX;int sum=0;
        while(right<nums.size()){
            sum+=nums[right];
            while(sum>=target){
                int len=right-left+1;
                ans=min(ans,len);
                sum-=nums[left];
                left++;
            }
            right++;
        }
        if (ans==INT_MAX) return 0;
        return ans;
    }
};
//T.C. = O(n) 
//S.C. = O(1)