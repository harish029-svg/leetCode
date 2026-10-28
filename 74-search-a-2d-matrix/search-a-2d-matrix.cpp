class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {

        int m = arr.size();
        int n = arr[0].size();

        if(m==0 || n==0){
            return false;
        }

        int low = 0;
        int high = m*n-1;

        while(low<=high){   
            int mid = low+ (high-low) /2;
            int midvalue = arr[mid/n][mid%n];

                if(midvalue == target){
                    return true;
                }
                else if(target > midvalue){
                    low = mid +1;
                }
                else{
                    high = mid-1;

                }

            }
        

        return false;
        
    }
};