class Solution {
    public int[] rearrangeArray(int[] nums) {
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();
        int n = nums.length;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                neg.add(nums[i]);
            }
            else{
                pos.add(nums[i]);
            }
        }

        int[] ans = new int[nums.length];

        int i = 0;  // positive index
        int j = 0;  // negative index
        int k = 0;  // answer index

        while (i < pos.size() && j < neg.size()) {

            ans[k] = pos.get(i);
            i++;
            k++;

            ans[k] = neg.get(j);
            j++;
            k++;
        }

        return ans;
    }
}