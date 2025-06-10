
class Solution {
  public:
    int seriesSum(int n) {
        // code here
        if(n == 1 || n == 0) return n;
        return n * (n + 1) / 2;
    }
};
