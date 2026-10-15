class Solution {
public:
    int findMin(vector<int>& nums) {
        
        int low = 0;
        int high = nums.size() - 1;
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(nums[low] == nums[mid] && nums[mid] == nums[high]) {
                low++;
                high--;
                continue;
            }
            if(nums[mid] > nums[high]) {
                low = mid + 1;
            }
            // Handle duplicates
            
            else {
                high = mid;
            }
        }

        return nums[low];
    }
};