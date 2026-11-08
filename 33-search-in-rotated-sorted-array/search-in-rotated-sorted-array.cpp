class Solution {
public:
    int search(vector<int>& nums, int target) {
        // int s = 0;
        int ans;
        // int e = nums.size()-1;
        // int mid = s + (e-s)/2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        // while(s<e){
        //     if(nums[mid]> nums[0]){
        //         s = mid + 1;
        //     }
        //     else{
        //         e = mid;      
        //     }

        //     mid = s + (e-s)/2;
        // }
        return -1;
    }
};