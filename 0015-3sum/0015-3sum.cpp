class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //Triplets
        //So, Two-Pointer
        //we don't want to return indices 
        //so we can sort
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int left=i+1;
            int right=nums.size()-1;
            int target = -1 * nums[i];
            while(left<right){
                int sum = nums[left]+nums[right];
                if(sum==target){
                    ans.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<nums.size()-1 && nums[left]==nums[left-1]) left++; //notice left-1 
                    while(right>0 && nums[right]==nums[right+1]) right--; //notice right+1
                }
                else if(sum<target) left++;
                else right--;
            }
        }
        return ans;
    }
};
//T.C. = O(nlogn) + O(n square) = O(n square)
//S.C. = O(n square)