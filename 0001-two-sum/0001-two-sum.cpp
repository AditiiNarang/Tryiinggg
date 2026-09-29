class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //since index return karni hai, so we cannot use two pointer.
        //Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity? 
        //So Hashmap
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int complement=target-nums[i];
            if(mp.find(complement)!=mp.end())
                return {mp[complement],i};
            mp[nums[i]] = i; // map ko gradually hi build karo.(isse duplicates avoid hote hai.)
        }
        return {};
    }
};
//T.C. = O(n)
//S.C. = O(n)
// We could have done two pointer but they have asked for indices so we approached HashMap.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna