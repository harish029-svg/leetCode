import java.util.HashMap;
class Solution {
    public int lengthOfLongestSubstring(String s) {
        HashMap<Character, Integer> map = new HashMap<>();

        int start =0;
        int max = 0;

        for(int e=0; e<s.length(); e++){
            char c = s.charAt(e);
            map.put(c, map.getOrDefault(c,0)+1);
            while(map.get(c)>1){
                char sc = s.charAt(start);
                map.put(sc, map.get(sc)-1);
                start++;
            }
            max = Math.max(max, (e-start+1));
        }
        return max;

    }
}