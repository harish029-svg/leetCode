// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& nums) {
//         int n = nums.size();
//         vector<vector<int>> ans;
//         sort(nums.begin(), nums.end());
//         for(int i=0; i<n-2; i++){
//             for(int j=i+1; j<n-1; j++){
//                 for(int k=j+1; k<n; k++){
//                     if(nums[i]+nums[j]+nums[k]==0){
//                         vector<int>temp = {nums[i], nums[j], nums[k]};
//                          sort(temp.begin(), temp.end());
//                          ans.insert(temp);
//                     }
//                 }
//             }
//         }return vector<vector<int>>(ans.begin(), ans.end());
//     }
// };





class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
        int n = nums.size();
        vector<vector<int>> ans;
        
        sort(nums.begin(), nums.end()); // ADD THIS
        
        for(int i=0; i<n-2; i++){
            
            if(i>0 && nums[i]==nums[i-1]) continue;
            
            int left = i+1;
            int right = n-1;
            
            while(left < right){
                
                int sum = nums[i] + nums[left] + nums[right];
                
                if(sum == 0){
                    ans.push_back({nums[i], nums[left], nums[right]});
                    
                    while(left<right && nums[left]==nums[left+1]) left++;
                    while(left<right && nums[right]==nums[right-1]) right--;
                    
                    left++;
                    right--;
                }
                else if(sum < 0){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return ans;
    }
};