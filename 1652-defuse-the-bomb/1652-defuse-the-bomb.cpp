class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        //For every index, we need exactly |k| elements.
        //The window size is fixed.
        //So, Fixed Size Sliding Window.
        int n=code.size();
        int left,right;
        vector<int>ans(n,0);
        if (k==0) return ans;
        else if(k>0){
            left=1;
            right=k;
        }
        else{
            left=n+k;
            right=n-1;
        }
        int windowsum=0;
        for(int i=left;i<=right;i++) //T.C. = O(k)
            windowsum+=code[i];
        for(int i=0;i<n;i++){        //T.C. = O(n)
            ans[i]=windowsum;
            windowsum-=code[left%n];
            left++;
            right++;
            windowsum+=code[right%n];
        }
        return ans;
    }
};
//T.C. = O(k) + O(n) = O(n)
//S.C. = O(n)