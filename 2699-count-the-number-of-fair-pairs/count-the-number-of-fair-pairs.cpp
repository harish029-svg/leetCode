// class Solution {
// public:
//     long long countFairPairs(vector<int>& nums, int lower, int upper) {
//         int n = nums.size();
//         sort(nums.begin(), nums.end());
//         int sum = 0;
//         // for(int i=0; i<n; i++){
//         //     for(int j=i+1; j<n; j++){
//         //         if((nums[i]+ nums[j]) >= lower && (nums[i] + nums[j]) <=upper){
//         //             sum++;
//         //         }
//         //     }
//         // }
//         // return sum;
        
//         int low = 0;
//         int high = n-1;
//         int count =0;
//         while(low<=high){
//             if(nums[low]+ nums[high]> upper){
//                 high--;
//             }else{
//                 low++;
//                 count++;
//             }

//         }
//         return count;
//     }
// };



class Solution {
public:
    long long countFairPairs(vector<int>& nums, int lower, int upper) {

        int n = nums.size();
        sort(nums.begin(), nums.end());

        long long countUpper = 0;
        long long countLower = 0;

        // Count pairs having sum <= upper
        int low = 0;
        int high = n - 1;

        while(low < high) {
            if(nums[low] + nums[high] <= upper) {
                countUpper += (high - low);
                low++;
            }
            else {
                high--;
            }
        }

        // Count pairs having sum < lower
        low = 0;
        high = n - 1;

        while(low < high) {
            if(nums[low] + nums[high] < lower) {
                countLower += (high - low);
                low++;
            }
            else {
                high--;
            }
        }

        return countUpper - countLower;
    }
};