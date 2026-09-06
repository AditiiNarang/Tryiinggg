class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Sorted Array
        //In-place
        //So Two Pointer
        int i=2,j;
        if (nums.size() <= 2)
            return nums.size();
        for(int j=2;j<nums.size();j++){
            if(nums[j]!=nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};
//T.C. = O(n)
//S.C. = O(1)