class Solution {
  public:
    int isPowerOfAnother(int X, int Y) {
        if (X == 1) return Y == 1;

        while (Y > 1) {
            if (Y % X != 0) return 0;
            Y = Y / X;
        }

        return 1;
    }
};
