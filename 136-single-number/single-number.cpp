class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();

        unordered_map<int, int> mp;
        for(int x: nums){
            mp[x]++;
        }
        int ans = -1;
        for(auto it: mp){
            if(it.second == 1){
                ans= it.first;
            }
        }
        return ans;
    }
};