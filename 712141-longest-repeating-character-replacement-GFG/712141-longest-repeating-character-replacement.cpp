class Solution {
  public:
    int longestSubstr(string& s, int k) {
        //LONGEST substring in which we can replace
        //at most k characters to make all characters the same.   
        //Window size isnot fixed
        //So Variable Size Sliding Window
        int left=0,right=0;
        int maxi=0;
        int maxfreq=0;
        vector<int>freq(256,0); //agar 256 na lena ho to, 
        //26 le sakte hai, kyuki 26 alphabets hi hote hai.
        for(right=0;right<s.length();right++){
            freq[s[right]]++; //freq[s[right]-'A']++
            int len=right-left+1;
            maxfreq=max(maxfreq,freq[s[right]]);
            int diff=len-maxfreq;
            while(diff>k){
                freq[s[left]]--; //freq[s[left]-'A']--
                left++;
                len=right-left+1;
                diff=len-maxfreq;
            }
            maxi=max(maxi,len);
        }
        return maxi;
    }
};
//T.C. = O(n)
//S.C. = O(1)

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna