class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        //In-place
        //So Two-pointer
        int left=0, right=arr.size()-1;
        while(left<right){
            if (arr[left]==0){
                left++;
            }
            else{
                swap(arr[left],arr[right]);
                right--;
            }
        }
    }
};
//T.C. = O(n)
//S.C. = O(1)

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna