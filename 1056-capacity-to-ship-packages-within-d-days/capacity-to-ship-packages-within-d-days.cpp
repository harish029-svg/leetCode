class Solution {
public:
    int maximum(vector<int>& weights){
        int n = weights.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            if(weights[i] > maxi){
                maxi = weights[i];
            }
        }
        return maxi;
    }

    int sumation(vector<int> &weights){
        int n = weights.size();
        int sum =0;
        for(int i=0; i<n;i++){
            sum += weights[i];
        }
        return sum;
    }

    int fuc(vector<int> &weights, int cap){
        int n = weights.size();
        int day =1;
        int load = 0;
        for(int i=0; i<n; i++){
            if(load + weights[i] > cap){
                day = day+1;
                load = weights[i];
            }
            else{
                load += weights[i];
            }
        }
        return day;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int low = maximum(weights);
        int high = sumation(weights);
         while (low < high) {
            int mid = low + (high - low) / 2;
            int reqDays = fuc(weights, mid);

            if (reqDays <= days) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        return low;
    }
};