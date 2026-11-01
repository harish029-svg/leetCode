class Solution {
public:
    int maximum(vector<int>&arr){
        int n = arr.size();
        int maxi = INT_MIN;
        for(int i=0; i<n; i++){
            maxi = max(maxi, arr[i]);
        }
        return maxi;
    }
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        vector<int> ans;
        int low = 1;
        int high = maximum(arr);
        if((arr[n-1] - n)==0){
            return arr[n-1] + k;
        }

        else{
            for(int i=0; i<n; i++){
                if(arr[i] <= k){
                    k++;
                }else{
                    break;
                }
            }
        }
        return k;
        
    }
};