class Solution {
  public:
    int maxSubarraySum(vector<int>& nums, int k) {
        int l=0, r=k-1;
        long long int sum=0;
        for(int i=l;i<=r;i++)         sum+=nums[i];
        long long int maxSum=sum;
        while(r<nums.size()-1){
            sum=sum-nums[l];
            l++;
            r++;
            sum+=nums[r];
            maxSum=max(maxSum,sum);
        }
        return maxSum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna