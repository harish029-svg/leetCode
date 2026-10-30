// // class Solution {
// // public:

// //     int maximum(vector<int>& bloomDay){
// //         int maxi = INT_MIN;
// //         int n = bloomDay.size();
// //         for(int i=0; i<n; i++){
// //             maxi = max(maxi, bloomDay[i]);
// //         }
// //         return maxi;
// //     }
// //         int minimum(vector<int>& bloomDay){
// //         int mini = INT_MAX;
// //         int n = bloomDay.size();
// //         for(int i=0; i<n; i++){
// //             mini = min(mini, bloomDay[i]);
// //         }
// //         return mini;
// //     }

// //     int minDays(vector<int>& bloomDay, int m, int k) {
// //         int sum = 0;
// //         int count = 0;
// //         int noofBouqet = 0;
// //         int maxim = maximum(bloomDay);
// //         int minim = minimum(bloomDay);

// //         for(int day = minim; day<=maxim; day++){
            
// //         for(int i=0; i<bloomDay.size(); i++){
// //             if(bloomDay[i] <= day){
// //                 count++;
// //             }
// //             else{
// //                 noofBouqet = count/k;
// //                 sum += noofBouqet;
// //                 count = 0;
                
// //             }
// //         }
// //         }
// //         noofBouqet = count/k;

// //         if(noofBouqet >= m){
// //             return noofBouqet;
// //         }
// //         return -1;
// //     }
// // };





// class Solution {
// public:
//     int maximum(vector<int>& bloomDay) {
//         int maxi = INT_MIN;
//         for (int i = 0; i < bloomDay.size(); i++) {
//             maxi = max(maxi, bloomDay[i]);
//         }
//         return maxi;
//     }

//     int minimum(vector<int>& bloomDay) {
//         int mini = INT_MAX;
//         for (int i = 0; i < bloomDay.size(); i++) {
//             mini = min(mini, bloomDay[i]);
//         }
//         return mini;
//     }

//     int minDays(vector<int>& bloomDay, int m, int k) {
//         int n = bloomDay.size();
//         if (1LL * m * k > n) {
//             return -1;
//         }

//         int maxim = maximum(bloomDay);
//         int minim = minimum(bloomDay);

//         for (int day = minim; day <= maxim; day++) {
//             int count = 0;
//             int bouquets = 0;

//             for (int i = 0; i < n; i++) {
//                 if (bloomDay[i] <= day) {
//                     count++;

//                     if (count == k) {
//                         bouquets++;
//                         count = 0;
//                     }
//                 } else {
//                     count = 0;
//                 }
//             }

//             if (bouquets >= m) {
//                 return day;
//             }
//         }

//         return -1;
//     }
// };




class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }

        int low = 1, high = 1e9;
        while (low < high) {
            int mid = low + (high - low) / 2;

            if (canMakeBouquets(bloomDay, m, k, mid)) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }

private:
    bool canMakeBouquets(vector<int>& bloomDay, int m, int k, int day) {
        int total = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            int count = 0;
            while (i < bloomDay.size() && count < k && bloomDay[i] <= day) {
                count++;
                i++;
            }

            if (count == k) {
                total++;
                i--;
            }

            if (total >= m) {
                return true;
            }
        }

        return false;
    }
};