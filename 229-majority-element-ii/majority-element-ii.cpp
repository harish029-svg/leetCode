class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq = n/3;

        vector<int> ans;

        unordered_map<int, int> mp;

        for(int x: nums){
            mp[x]++;
        }

        for(auto it: mp){
            if(it.second > freq){
                ans.push_back(it.first);

            }
        }
        return ans;
    }
};