class Solution {
  public:
    int smallestSubWithSum(int x, vector<int>& arr) {
        // code here
        int left=0,right=0;
        int sum=0; int ans=INT_MAX;
        while(right<arr.size()){
            sum+=arr[right];
            while(sum>x){
                int length=right-left+1;
                ans=min(ans,length);
                sum-=arr[left];
                left++;
            }
            right++;
        }
        if(ans==INT_MAX) return 0;
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna