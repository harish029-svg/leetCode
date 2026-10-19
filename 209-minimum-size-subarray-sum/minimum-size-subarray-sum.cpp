class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0; 
        int j = 0;
        int sum = 0;
        int mn = INT_MAX;

        while(j < nums.size()) {

            // Expand window
            sum += nums[j];

            // Shrink window whenever sum >= target
            while(sum >= target) {

                // Update minimum length
                mn = min(j - i + 1, mn);

                // Remove leftmost element
                sum -= nums[i];

                // Move left pointer
                i++;
            }

            // Move right pointer
            j++;
        }

        // No valid subarray found
        if(mn == INT_MAX) {
            return 0;
        }

        return mn;
    }
};