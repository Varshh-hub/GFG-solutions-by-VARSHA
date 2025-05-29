// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        int sum = 0;
        int val = 0;
        int temp = n;

        while (temp > 0) {
            val++;
            temp = temp / 10;
        }

        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            int x = 1;
            for (int i = 0; i < val; i++) {
                x = x * digit;
            }
            sum = sum + x;
            temp = temp / 10;
        }

        return sum == n;
    }
};
