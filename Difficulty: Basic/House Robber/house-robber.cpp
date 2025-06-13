class Solution {
  public:
    int maximizeMoney(int N, int K) {
        // code here
        int max = (N + 1) / 2;  
        return max * K;
    }
};
