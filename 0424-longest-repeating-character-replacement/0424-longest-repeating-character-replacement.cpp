class Solution {
public:
    int characterReplacement(string s, int k) {
        //LONGEST substring in which we can replace
        //at most k characters to make all characters the same.   
        //Window size is not fixed
        //So Variable Size Sliding Window
        unordered_map<char,int> mp;
        int left=0,right=0;
        int maxfreq=0;
        int maxi=0;
        for(right=0;right<s.length();right++){
            mp[s[right]]++;
            int maxfreq=max(maxfreq,mp[s[right]]);
            int len=right-left+1;
            int diff=len-maxfreq;
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
//T.C. = O(n)
//S.C. = O(1)

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna