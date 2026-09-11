class Solution {
  public:
    int countDistinctPairs(vector<int> &arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        int count=0;
        while(i<j){
            int sum=arr[i]+arr[j];
            if(sum==target){
                i++;
                j--;
                count++;
                while(arr[i]==arr[i-1]) i++;
                while(arr[j]==arr[j+1]) j--;
            }
            else if(sum<target)
                i++;
            else j--;
        }
        return count;
    }
};