class Solution {
    public int maxFrequencyElements(int[] nums) {
        HashMap<Integer, Integer> arr = new HashMap<>();
        for(int x : nums){
            arr.put(
                x, arr.getOrDefault(x,0)+1
            );
        }
        int max = 0;
        for(int i: arr.values()){
            max = Math.max(max,i);
        }

        int sum = 0;
        for(int x: arr.values()){
            if(x== max){
                sum += x;
            }
        }
        return sum;
    }
}