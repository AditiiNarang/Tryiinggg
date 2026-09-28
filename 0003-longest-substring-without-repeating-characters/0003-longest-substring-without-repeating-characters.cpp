class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //Substring
        //koi bhi character 2 baar nahi aana chahiye
        //yaani har character ki frequency <= 1 honi chahiye
        //so, Variable Size Sliding Window
        int left=0,right=0;
        unordered_map<char,int>mp;
        if(s.length()==0) return 0;
        int ans=1;
        for(right =0;right<s.length();right++){
            mp[s[right]]++;
            // Agar newly added character duplicate ho gaya,
            // toh left ko aage move karke window shrink karo.
            while(mp[s[right]]>1){ //notice.
                mp[s[left]]--;
                if(mp[s[left]]==0) 
                    mp.erase(s[left]);
                left++;
            }
            int len=right-left+1;
            ans=max(ans,len);
        }
        return ans;
    }
};
//T.C. = O(n)
//S.C. = O(1)
