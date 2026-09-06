class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int number = 0;
        for(int i=0; i<n; i++){
            if(nums[i]!= number){
                return number;
            }
            number++;
        }
        return n;
    }
};