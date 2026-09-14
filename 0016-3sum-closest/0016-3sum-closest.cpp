class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        //Triplets
        //So, Two-Pointer
        //we don't want to return indices 
        //so we can sort
        sort(nums.begin(),nums.end());
        int closest_sum=0;
        int max_diff=INT_MAX;
        int diff=0;
        for(int i=0;i<nums.size();i++){
            int left=i+1;
            int right=nums.size()-1;
            while(left<right){
                int sum = nums[i]+nums[left]+nums[right];
                diff=abs(sum-target);
                if(max_diff>diff){
                    max_diff=diff;
                    closest_sum=sum;
                }
                if(sum==target){
                    left++;
                    right--;
                    return sum;
                }
                else if(sum<target){
                    left++;
                }
                else right--;
            }
        }
        return closest_sum;
    }
};
//T.C. = O(nlogn) + O(n square) = O(n square)
//S.C. = O(1)