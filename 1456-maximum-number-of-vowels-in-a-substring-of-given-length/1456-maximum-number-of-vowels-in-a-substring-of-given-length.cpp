class Solution {
public:
    //Substring
    //fixed length k
    //So, Fixed Size Sliding Window
    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U') return true;
        else return false;
    }
    int maxVowels(string s, int k) {
        int count=0;
        for(int i=0;i<k;i++){
            char ch=s[i];
            if(isVowel(ch)){
                count++;
            }
        }
        int maxcount=count;
        int left=0,right=k-1;
        while(right<s.length()){
            if(isVowel(s[left])){
                count--;
            }
            left++;
            right++;
            if(isVowel(s[right])){
                count++;
            }
            maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};
//T.C. = O(k) + O(n-k) = O(n)
//S.C. = O(1)