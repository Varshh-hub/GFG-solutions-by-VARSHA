// User function Template for C++

class Solution {
  public:
    int isPossible(int N) {
        int S = 100 - N;
        for (int y = 0; y <= S / 7; y++) {
            if ((S - 7 * y) % 3 == 0) return 1;
        }
        return 0;
    }
};
