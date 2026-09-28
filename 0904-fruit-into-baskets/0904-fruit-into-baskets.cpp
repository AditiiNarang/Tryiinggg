class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        //2 baskets, ek basket main ek hi type ke fruit
        //Starting from any...to the right means we can not skip so Contiguous.
        //So, Variable Size Sliding Window and k=2.
        int left=0,right=0;
        int n=fruits.size();
        unordered_map<int, int> mp;
        int k=2;
        int res=1;
        for(right=0;right<n;right++){
            mp[fruits[right]]++;
            while(mp.size()>k){
                mp[fruits[left]]--;
                if(mp[fruits[left]]==0)
                    mp.erase(fruits[left]);
                left++;
            }
            //As the window is always valid (size <= k)
            int len=right-left+1;
            res=max(len,res);
        }      
        return res;
    }
};
//T.C. = O(n)
//S.C. = O(1) kyuki the map is storing at most k+1 (3) elements.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna