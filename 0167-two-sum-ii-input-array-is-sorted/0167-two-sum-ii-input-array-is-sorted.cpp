class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        //given array is already sorted. 
        //So, Two Pointer.
        int i=0,j=numbers.size()-1;
        while(i<j){
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                return {i+1,j+1};
            }
            else if(sum<target){
                i++;
            }
            else
                j--;
        }
        return {};
    }
};
//T.C.=O(n)
//S.C.=O(1)