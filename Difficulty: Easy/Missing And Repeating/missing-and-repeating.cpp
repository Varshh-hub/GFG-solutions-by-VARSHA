class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        int n = arr.size();
        vector<int> count(n + 1, 0);  
        int rep = -1, miss = -1;

        for (int i = 0; i < n; i++) {
            count[arr[i]]++;
        }

        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) miss = i;
            else if (count[i] == 2) rep = i;
        }

        return {rep, miss};
    }
};
