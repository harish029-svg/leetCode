class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        
        HashMap<Integer, Integer> mp = new HashMap<>();

        for(int x: arr){
            mp.put(x, mp.getOrDefault(x,0)+1);
        }

        HashSet<Integer> st = new HashSet<>();
        for(int it: mp.values()){
            if(st.contains(it)){
                return false;
            }
            st.add(it);
        }

        return true;


    }
}