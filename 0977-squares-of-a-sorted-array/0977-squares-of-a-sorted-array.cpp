class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //Non decreasing order means sorted array
        //So, Two Pointer
        //Sorted input → separate negatives/positives → square → reverse negative squares → Merge Two Sorted Arrays
        vector<int>pos;
        vector<int>neg;
        vector<int>ans(nums.size());
        int i=0,j=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }
        for(int i=0;i<pos.size();i++){
            pos[i]=pos[i]*pos[i];
        }
        for(int i=0;i<neg.size();i++){
            neg[i]=neg[i]*neg[i];
        }
        reverse(neg.begin(),neg.end());
        int m=0;
        while(i<pos.size() && j<neg.size()){
            if(pos[i]<neg[j]){
                ans[m]=pos[i];
                m++;
                i++;
            }
            else{
                ans[m]=neg[j];
                m++;
                j++;
            }
        }
        while(i<pos.size()){
            ans[m]=pos[i];
            m++;
            i++;
        }
        while(j<neg.size()){
            ans[m]=neg[j];
            m++;
            j++;
        }
        return ans;
    }
};
//T.C. = O(n)
//S.C. = O(n)