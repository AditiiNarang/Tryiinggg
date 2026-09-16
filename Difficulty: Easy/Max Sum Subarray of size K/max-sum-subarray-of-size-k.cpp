class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        //Subarray 
        //Fixed size k
        //So, Fixed Size Sliding Window
        int sum=0;
        for(int i=0;i<k;i++)
            sum+=arr[i];
        int maxi=sum;
        int left=0,right=k-1;
        while(right<arr.size()-1){
            sum-=arr[left];
            left++;
            right++;
            sum+=arr[right];
            if(sum>maxi) maxi=sum;
        }
        return maxi;
    }
};