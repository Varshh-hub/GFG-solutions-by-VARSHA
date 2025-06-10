class Solution {
  public:
    vector<int> firstAndLast(int x, vector<int> &arr) {
        int first = -1;
        int last = -1;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                if (first == -1) first = i;
                last = i;
            }
        }
        if (first == -1) return {-1};
        return {first, last};
    }
};
