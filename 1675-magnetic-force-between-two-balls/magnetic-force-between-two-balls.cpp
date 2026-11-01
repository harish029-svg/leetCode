class Solution {
public:

    bool canbeplaced(vector<int>&position, int distance, int cows){
        int last = position[0];
        int countcows = 1;
        for(int i=1; i<position.size(); i++){
            if(position[i]- last >= distance){
                countcows++;
                last = position[i];
            }
            if(countcows >= cows){
                return true;
            }
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(), position.end());
        int maxPos = position[n-1];
        int minPos = position[0];
        int high = maxPos - minPos;
        int low =1;
        int ans = 0;

       while(low<=high){
            int mid = low + (high - low)/2;
            if(canbeplaced(position, mid, m) == true){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return ans;

    }
};