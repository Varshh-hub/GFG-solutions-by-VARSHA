class Solution {
  public:
    vector<int> consecutiveSum(int n) {
        if ((n - 3) % 3 != 0) return {-1}; 

        int x = (n - 3) / 3;
        return {x, x + 1, x + 2};
    }
};
