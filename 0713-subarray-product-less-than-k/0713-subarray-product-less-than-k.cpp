class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        //Variable Size Sliding Window
        int left=0,right=0;
        int count=0;
        int prod=1;
        if(k==1) return 0;
        while(right<nums.size()){
            prod*=nums[right];
            while(prod>=k){
                prod /=nums[left];
                left++;
            }
            count+=right-left+1; //No. of subarrays ending at right.
            right++;
        }
        return count;
    }
};
//T.C. = O(n)
//S.C. = O(1)