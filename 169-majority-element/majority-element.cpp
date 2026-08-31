class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int freq = n/2;


        unordered_map<int , int> mp;

        for(int x: nums){
            mp[x]++;
        }

        for(auto it: mp){
            if(it.second > freq){
                return it.first;
            }
        }
        return -1;
    }
};