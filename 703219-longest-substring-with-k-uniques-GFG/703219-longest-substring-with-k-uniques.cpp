class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        //substring
        //exactly k distict char
        //par Window size is not fixed 
        //So, Variable Size Sliding Window
        int low=0,high=0,n=s.length();
        unordered_map<char,int>mp;
        int res=-1;
        for(high=0;high<n;high++){
            mp[s[high]]++;
            while(mp.size()>k){
                mp[s[low]]--;
                if(mp[s[low]]==0) mp.erase(s[low]);
                low++;
            }
            if(mp.size()==k){
                int len=high-low+1;
                res=max(res, len);
            }
        }
        return res;
    }
};
// T.C. = O(n)
// high moves n times and low also moves at most n times.
// Therefore O(n + n) = O(n)

// S.C. = O(k)
// At most k distinct characters are maintained in the map.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna