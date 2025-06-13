class Solution {
  public:
    int isFactorial(int N) {
        if (N == 1|| N == 0) return N;  
        
        int fact = 1;
        int i = 1;
        
        while (fact < N) {
            i++;
            fact = fact * i;
        }
        
        if(fact == N) return 1;
        else return 0;
    }
};
