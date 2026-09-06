class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //Sorted Array
        //In-place
        //So Two Pointer
        int i=0,j;
        for(int j=1;j<nums.size();j++){
            if(nums[j]!=nums[i]){
                i++; // count of unique elements.
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};
//T.C.= O(n)
//S.C.= O(1)