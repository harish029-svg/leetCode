
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> missing;

        int mini = nums[0];
        int maxi = nums[nums.size() - 1];

        for (int i = mini; i <= maxi; i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                missing.push_back(i);
            }
        }

        return missing;
    }
};
