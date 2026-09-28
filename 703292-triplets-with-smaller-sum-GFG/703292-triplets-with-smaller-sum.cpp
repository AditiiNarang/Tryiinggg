class Solution {
  public:
    int countTriplets(int target, vector<int>& arr) {
        //Triplets
        //So Two-Pointer
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size()-2;i++){// -2 isliye kyuki ek left aur ek
        //right ye bhi to honge last main.
            int left=i+1;
            int right=arr.size()-1;
            while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
                if(sum<target){
                    count+=right-left;
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return count;
    }
};
//T.C. = O(nlogn) + O(n²) = O(n²)
//S.C. = O(1)

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna