class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        //In-place
        //so Two pointer
        int k=0;
        for(int j=0;j<nums.size();j++){
            if(nums[j]!=val){
                nums[k]=nums[j];
                k++;
            }
        }
        return k;
    }
};
//T.C. = O(n)
//S.C. = O(1)