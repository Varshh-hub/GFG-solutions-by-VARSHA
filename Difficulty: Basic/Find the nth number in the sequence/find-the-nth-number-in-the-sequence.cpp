class Solution {
  public:
    long long int get(long long int n) {
        long long int k = 1;
        while (k * (k + 1) / 2 < n) {
            k++;
        }
        long long int prev = k * (k - 1) / 2;
        return n - prev;
    }
};
