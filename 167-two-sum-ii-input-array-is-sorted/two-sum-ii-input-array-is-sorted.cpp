class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        vector<int> ans;
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = low + (high-low)/2;
            int sum = arr[low] + arr[high];
            if(sum == target){
                ans.push_back(low+1);
                ans.push_back(high+1);
                return ans;
            }
            else if(sum > target){
                high--;
            }
            else{
                low++;
            }
        }
        return {-1,-1};
    }
};