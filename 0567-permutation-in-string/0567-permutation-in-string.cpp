class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        //Substring
        //of fixed length k
        //where k is length of s1.
        //So, Fixed Size Sliding Window.
        int k=s1.length();
        if(k>s2.length()) return false;
        vector<int>s1_freq(26,0);
        vector<int>window_freq(26,0);
        for(int i=0;i<k;i++){
            s1_freq[s1[i]-'a']++;
        }
        for(int i=0;i<k;i++){
            window_freq[s2[i]-'a']++;
        }
        if(s1_freq==window_freq) return true;
        else{
            int left=0,right=k-1;
            while(right<s2.length()-1){
                window_freq[s2[left]-'a']--;
                left++;
                right++;
                window_freq[s2[right]-'a']++;
                if(s1_freq==window_freq) return true;
            }
        }
        return false;
    }
};
//T.C. = O(k) + O(n-k) = O(n)
//S.C. = O(26) + O(26) = O(constant) = O(1)