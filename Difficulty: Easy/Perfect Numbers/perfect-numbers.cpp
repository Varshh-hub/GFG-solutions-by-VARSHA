class Solution {
  public:
    bool isPerfectNumber(int n) {
        if (n <= 1)
        {
            return false;
        }
        
        int sum = 1; 
        
        for (int i = 2; i * i <= n; i++) 
        {
            if (n % i == 0) 
            {
                sum = sum + i;
                int x = n / i;
                if (i != x) 
                {
                    sum = sum + x;
                }
            }
        }
        return sum == n;
    }
};
