class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        //contiguous subarray
        //fixed length k
        //so Fixed Size Sliding Window
        double sum=0;
        for(int i=0;i<k;i++){ //T.C. = O(k)
            sum+=nums[i];
        }
        double maxi=sum;     //T.C. = O(n-k)
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
//T.C. = O(k) + O(n-k) = O(n)
//S.C. = O(1)