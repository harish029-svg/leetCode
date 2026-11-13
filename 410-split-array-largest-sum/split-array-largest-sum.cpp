#include <bits/stdc++.h>
class Solution {
public:

    int countways(vector<int>& nums, int totalval){
        int ways = 1;
        long long wayscount = 0;
        for(int i=0; i<nums.size(); i++){
            if(wayscount + nums[i] <= totalval){
                wayscount += nums[i];
            }else{
                ways++;
                wayscount = nums[i];
            }
        }
        return ways;
    }

    int findmin(vector<int> &nums, int size, int k){
        if(k > size) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while(low<=high){
            int mid = (low + high)/2;
            int way = countways(nums, mid);
            if(way > k){
                low  = mid +1;
            }else{
                high = mid -1;
            }
        }return low;
    }
    int splitArray(vector<int>& nums, int k) {
        return findmin(nums, nums.size(), k);
        
    }
};