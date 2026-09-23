class Solution {
public:
    int strStr(string haystack, string needle) {
        int k=needle.size();
        if(k==0) return -1;
        if(k>haystack.size()) return -1;
        int left=0,right=k-1;
        while(right<=haystack.size()-1){
            bool match = true;
            for(int i=0;i<k;i++){
                if(haystack[i+left]!=needle[i]){
                    match=false;
                    break;
                }
            }
            if(match) return left;
            left++;
            right++;
        }
        return -1;
    }
};