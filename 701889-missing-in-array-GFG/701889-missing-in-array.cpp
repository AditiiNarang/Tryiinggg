class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int sum1=0;
        int sum2=0;
        for(int i=0;i<arr.size();i++){
            sum1+=arr[i];
        }
        int n=arr.size();
        for(int i=1;i<=n+1;i++) sum2+=i;
        return sum2-sum1;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna