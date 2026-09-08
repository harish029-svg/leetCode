class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();

        if(n==0){
            return 0;
        }
        sort(nums.begin(), nums.end());
        int count = 1;
        int maxcount = 1;
       
        for(int i=0; i<n-1; i++){
            if(nums[i]== nums[i+1]-1){
                count++;
                maxcount = max(maxcount, count);
            }

            else if(nums[i] == nums[i+1]){
                //do nothing
            }
            else{
                count = 1;
            }
        }
        return maxcount;
    }
};