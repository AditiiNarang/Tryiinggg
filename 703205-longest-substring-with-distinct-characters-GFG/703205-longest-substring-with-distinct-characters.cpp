class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        //Substring
        //koi bhi character 2 baar nahi aana chahiye
        //yaani har character ki frequency <= 1 honi chahiye
        //So, Variable Size Sliding Window
        int left=0,right=0;
        unordered_map<char,int>mp;
        if(s.length()==0) return 0;
        int ans=1;
        for(right =0;right<s.length();right++){
            mp[s[right]]++;
            int k=right-left+1;
            while(mp.size()<k){ 
                mp[s[left]]--;
                if(mp[s[left]]==0) 
                    mp.erase(s[left]);
                left++;
                k=right-left+1;
            }
            int len=right-left+1;
            ans=max(ans,len);
        }
        return ans;
    }
};
//T.C. = O(n)
//S.C. = O(1)

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna