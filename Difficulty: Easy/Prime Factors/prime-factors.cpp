class Solution {
  public:
    vector<int> AllPrimeFactors(int N) {
        vector<int> result;
        
        for (int i = 2; i * i <= N; i++) 
        {
            if (N % i == 0) 
            {
                result.push_back(i);
                while (N % i == 0) 
                {
                    N = N / i;
                }
            }
        }
        if (N > 1) {
            result.push_back(N); 
        }
        return result;
    }
};
