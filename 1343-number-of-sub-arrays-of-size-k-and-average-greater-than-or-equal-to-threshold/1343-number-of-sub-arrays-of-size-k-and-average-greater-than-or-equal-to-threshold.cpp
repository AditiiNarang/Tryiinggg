class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        //Subarray
        //Fixed size k
        //So, Fixed Sliding Window.
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=arr[i];
        }
        int left=0,right=k-1;
        int count=0;
        if((sum/k)>=threshold) count++; //To avoids repeated division, we can do: sum>=threshold*k as division is generally more expensive/slower arithmetic operation than multiplication.
        while(right<arr.size()-1){
            sum-=arr[left];
            left++;
            right++;
            sum+=arr[right];
            if((sum/k)>=threshold) count++;
        }
        return count;
    }
};
//T.C.=O(k) + O(n-k) = O(n)
//S.C.=O(1)