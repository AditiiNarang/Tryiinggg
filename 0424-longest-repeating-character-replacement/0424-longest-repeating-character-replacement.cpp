class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int left=0,right=0;
        int len=0;
        int maxfreq=0;
        int diff=0;
        int maxi=0;
        for(right=0;right<s.length();right++){
            mp[s[right]]++;
            maxfreq=max(maxfreq,mp[s[right]]);
            len=right-left+1;
            diff=len-maxfreq;
            while(diff>k){
                mp[s[left]]--;
                left++;
                len=right-left+1;
                diff=len-maxfreq;
            }
            maxi=max(len,maxi);
        }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna