//brute force
// class Solution {
// public:
//     int reversePairs(vector<int>& nums) {
//         int n = nums.size();
//         int count = 0;

//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if(nums[i]> 2LL*nums[j]){
//                     count++;
//                 }
//             }
//         }
//         return count;

//     }
// };


//optimal
class Solution {
public:

    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;

        int left = low;
        int right = mid + 1;

        // Merge both sorted halves
        while (left <= mid && right <= high) {

            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Remaining elements of left half
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Remaining elements of right half
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy temp back to arr
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }


    int countPairs(vector<int>& arr, int low, int mid, int high) {

        int right = mid + 1;
        int count = 0;

        for (int i = low; i <= mid; i++) {

            while (right <= high && 
                   (long long)arr[i] > 2LL * arr[right]) {
                right++;
            }

            count += right - (mid + 1);
        }

        return count;
    }


    int mergeSort(vector<int>& arr, int low, int high) {

        int count = 0;

        // Base case
        if (low >= high)
            return 0;

        int mid = low + (high - low) / 2;

        // Count reverse pairs in left half
        count += mergeSort(arr, low, mid);

        // Count reverse pairs in right half
        count += mergeSort(arr, mid + 1, high);

        // Count reverse pairs between left and right halves
        count += countPairs(arr, low, mid, high);

        // Merge both sorted halves
        merge(arr, low, mid, high);

        return count;
    }


    int reversePairs(vector<int>& nums) {

        int n = nums.size();

        // IMPORTANT:
        // Store the returned count
        int count = mergeSort(nums, 0, n - 1);

        return count;
    }
};