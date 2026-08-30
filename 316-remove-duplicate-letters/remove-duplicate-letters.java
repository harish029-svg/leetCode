class Solution {
    public String removeDuplicateLetters(String s) {
       int[] freq = new int[26];

    for (char c : s.toCharArray()) {
        freq[c - 'a']++;
    }

    boolean[] used = new boolean[26];

    StringBuilder stack =
        new StringBuilder();

    for (char c : s.toCharArray()) {

        int index = c - 'a';

        freq[index]--;

        if (used[index]) {
            continue;
        }

        while (
            stack.length() > 0
            && stack.charAt(
                stack.length() - 1
            ) > c
            && freq[
                stack.charAt(
                    stack.length() - 1
                ) - 'a'
            ] > 0
        ) {

            char removed =
                stack.charAt(
                    stack.length() - 1
                );

            stack.deleteCharAt(
                stack.length() - 1
            );

            used[removed - 'a'] = false;
        }

        stack.append(c);
        used[index] = true;
    }

    return stack.toString(); 
    }
}