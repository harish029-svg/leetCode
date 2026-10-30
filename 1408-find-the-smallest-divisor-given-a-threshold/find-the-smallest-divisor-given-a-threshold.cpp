class Solution {
public:
    int maximum(vector<int>& nums){
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi, nums[i]);
        }
        return maxi;
    }
    
    int total(vector<int>&nums, int mid){
        int totalsum = 0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            totalsum += ceil((double)nums[i]/ (double)mid);
        }
        return totalsum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = maximum(nums);
        

        while(low<= high){
            int mid = low + (high - low)/2;
            int num = total(nums, mid);
            if(num <= threshold){
                high = mid-1;
            }
            else {
                low = mid+1;
            }
        }
        return low;
    }
};