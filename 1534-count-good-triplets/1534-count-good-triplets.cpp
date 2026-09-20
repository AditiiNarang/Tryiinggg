class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        //Not a TWO-POINTER Q.
        int count=0;
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                for(int k=j+1;k<n;k++){
                    if(abs(arr[i]-arr[j])<=a && abs(arr[j]-arr[k])<=b && abs(arr[k]-arr[i])<=c)
                        count++;
                }
            }
        }
        return count;
    }
};
//T.C. = O(n cube)
//S.C. = O(1)

//ek solution aur hai, haalaki worst case main usse bhi time complexity order of  n cube hi  hogi.
// class Solution {
// public:
//     int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
//         int n = arr.size();
//         int count = 0;

//         for (int i = 0; i < n - 2; i++) {
//             for (int j = i + 1; j < n - 1; j++) {

//                 // If i-j condition fails,
//                 // no need to check k
//                 if (abs(arr[i] - arr[j]) > a)
//                     continue;

//                 for (int k = j + 1; k < n; k++) {
//                     if (abs(arr[j] - arr[k]) <= b &&
//                         abs(arr[i] - arr[k]) <= c) {
//                         count++;
//                     }
//                 }
//             }
//         }

//         return count;
//     }
// };