class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int low = 0;
        int high = n-1;

        int vol = 0;
        while(low < high){
            int h = min(height[low], height[high]);
            int b = high - low;

            vol = max(vol, h*b);
            if(height[low] < height[high]){
                low++;
            }
            else{
                high--;
            }
        }
        return vol;

    }
};