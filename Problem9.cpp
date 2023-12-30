// You are given a string s consisting only of the characters '0' and '1'. In one operation, you can change any '0' to '1' or vice versa.

// The string is called alternating if no two adjacent characters are equal. For example, the string "010" is alternating, while the string "0100" is not.

// Return the minimum number of operations needed to make s alternating.

 
 public class Solution {
    public int minOperations(String s) {
        int n = s.length(), count = 0;
        if (n == 1) return 0;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0 && s.charAt(i) == '1') count++;
            if (i % 2 == 1 && s.charAt(i) == '0') count++;
        }
        return Math.min(count, n - count); // "n - count" is to handle the case of alternating 1,0,1,0,...
    }
}