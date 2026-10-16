class Solution {
    public int singleNonDuplicate(int[] nums) {
        TreeMap<Integer, Integer> mp = new TreeMap<>();
        for(int i=0; i<nums.length; i++){
            mp.put(nums[i], mp.getOrDefault(nums[i],0)+1);
        }
        int ans = -1;
        for(Integer key : mp.keySet()){
            if(mp.get(key)==1){
               ans = key;
            }
        }
        return ans;
    }
}