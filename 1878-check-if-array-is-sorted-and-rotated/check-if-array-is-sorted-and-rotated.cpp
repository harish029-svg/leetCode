class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans = nums;
        sort(ans.begin(), ans.end());

        for(int k=0; k<n; k++){

            vector<int>temp = ans;
            rotate(temp.begin(), temp.begin()+k,temp.end());
            

            if(temp == nums){
                return true;
            }

        }
        return false;
    }
};