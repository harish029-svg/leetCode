class Solution {
    public int longestConsecutive(int[] nums) {
        if(nums.length == 0) return 0;
        Arrays.sort(nums);
        int longest = 1;
        int count = 0;
        int lastsmaller = Integer.MIN_VALUE;
        int n = nums.length;

        for(int i=0; i<n; i++){
            if(nums[i]-1 == lastsmaller){
                count = count+1;
                lastsmaller = nums[i];
            }
            else if(lastsmaller != nums[i]){
                count = 1;
                lastsmaller = nums[i];
            }
            longest = Math.max(longest, count);
        }
        return longest;
    }
}