class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //fixed value (k) is given
        //So n-k is also a fixed value
        //ye n-k elements ek continuous window banyenge.
        //So, Fixed Size Sliding Window
        //At every step, we have to take card either from beginning or from end.
        //So instead of sliding window on k, sliding window on n-k.
        //So max sum from k = total sum - min from (n-k)
        int windowsum = 0;
        int totalsum=0;
        int n=cardPoints.size();
        for(int i=0;i<n;i++)               //T.C. = O(n)
            totalsum+=cardPoints[i];
        for (int i = 0; i < n- k; i++) {   //T.C. = O(n-k)
            windowsum += cardPoints[i];
        }
        int mini = windowsum;
        int left = 0, right = n - k - 1;
        while (right < cardPoints.size() - 1) { //T.C. = O(k)
            windowsum -= cardPoints[left];
            left++;
            right++;
            windowsum += cardPoints[right];
            mini = min(windowsum, mini);
        }
        return totalsum-mini;
    }
};
// T.C. = O(n) + O(n-k) + O(k) = O(2n) = O(n)
// S.C. = O(1)