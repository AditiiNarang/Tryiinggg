class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Rearrange kar rahe hai
        //In-place
        //3partitions 
        //So, DNF (Dutch National Flag)
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
// Follow up: Could you come up with a one-pass algorithm using only constant extra space? 
// DNF satisfies follow up. 
// T.C. = O(n)
// S.C. = O(1)