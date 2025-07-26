class Solution {
  public:
    bool isPalindrome(int n) {
        int orig = n;
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n /= 10;
        }

        return rev == orig;
    }
};
