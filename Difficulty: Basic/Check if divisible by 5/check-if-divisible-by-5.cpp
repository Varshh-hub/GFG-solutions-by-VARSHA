class Solution {
  public:
    int divisibleBy5(string N) {
        char last = N.back();
        if (last == '0' || last == '5')
            return 1;
        else
            return 0;
    }
};
