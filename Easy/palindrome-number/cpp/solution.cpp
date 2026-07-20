class Solution {
public:
    bool isPalindrome(int x) {
        // Negative numbers are not palindromes
        // Also if the last digit is 0, the first digit must be 0, which is only possible if x is 0
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int revertedNumber = 0;
        while (x > revertedNumber) {
            revertedNumber = revertedNumber * 10 + x % 10;
            x /= 10;
        }

        // When the length is an odd number, we can get rid of the middle digit by revertedNumber/10
        return x == revertedNumber || x == revertedNumber / 10;
    }
};
// Time Complexity: O(log10(n))
// Space Complexity: O(1)
