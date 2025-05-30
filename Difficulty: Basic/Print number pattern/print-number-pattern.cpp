class Solution {
  public:
    vector<int> printPat(int n) {
        // write code here
        vector<int> result;

        for (int i = n; i >= 1; i--) 
        {
            for (int j = n; j >= 1; j--) 
            {
                for (int k = 0; k < i; k++) 
                {
                    result.push_back(j);
                }
            }
            result.push_back(-1); 
        }

        return result;
    }
};


