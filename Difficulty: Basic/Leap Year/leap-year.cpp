class Solution {
  public:
    bool checkYear(int n) {
        if ((n % 400 == 0) || (n % 4 == 0 && n % 100 != 0)) 
            return true;
         else 
            return false;
    }
};
