class Solution {
  public:
    int countWays(int n) {
        // your code here
        int prev = 1, curr = 1, next, i = 2;
        if (n == 1) return n;
        while(i <= n)
        {
            next = prev + curr;
            prev = curr;
            curr = next;
            i = i+1;
        }
        return next;
    }
};
