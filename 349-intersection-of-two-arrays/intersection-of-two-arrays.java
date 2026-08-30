class Solution {
    public int[] intersection(int[] nums1, int[] nums2) {
        int n1 = nums1.length;
        int n2 = nums2.length;

        Arrays.sort(nums1);
        Arrays.sort(nums2);

        Set<Integer> st = new HashSet<>();
        for(int i=0; i<n1; i++){
            for (int j=0; j<n2; j++){
                if(nums1[i]== nums2[j]){
                   st.add(nums1[i]);
                }
            } 
        }

       int[] ans = new int[st.size()];

        int k = 0;
        for (int x : st) {
            ans[k++] = x;
        }

        return ans;
    }
}