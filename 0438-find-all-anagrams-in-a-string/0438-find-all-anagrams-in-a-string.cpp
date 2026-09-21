class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        //We need to find substrings of fixed length k,
        //where k = length of p. 
        //So, Fixed Sliding Window.
        int k=p.size();
        if(k>s.length()) return {};
        vector<int> p_freq(26,0);      // freq array of p
        vector<int> window_freq(26,0); // freq array of window
        vector<int>ans;
        for(int i=0;i<k;i++){
            p_freq[p[i]-'a']++;
        }
        for(int i=0;i<k;i++){
            window_freq[s[i]-'a']++;
        }
        int left=0,right=k-1;
        if(p_freq==window_freq) //har character ki frequency automatically compare ho jayegi.
            ans.push_back(0);
        while(right<s.length()-1){
            window_freq[s[left]-'a']--;
            left++;
            right++;
            window_freq[s[right]-'a']++;
            if(p_freq==window_freq) //har character ki frequency automatically compare ho jayegi.
                ans.push_back(left);
        }
        return ans;
    }
};
//T.C. = O(k) + O(k) + O(n-k) = O(n+k) = O(n)
//S.C. = O(26) + O(26) = O(constant) = O(1)