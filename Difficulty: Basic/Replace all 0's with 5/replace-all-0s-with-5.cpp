/*you are required to complete this method*/
#include <algorithm> 

class Solution {
  public:
    int convertFive(int n)
    {
        string s = to_string(n);
        std::replace(s.begin(), s.end(), '0', '5');
        return stoi(s);
    }
};

