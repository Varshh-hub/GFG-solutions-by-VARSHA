class Solution {
  public:
    // Function to check if b is a subset of a
    bool isSubset(vector<int> &a, vector<int> &b) {
        // Your code here
        unordered_map<int, int> m;
        for (int x : a) m[x]++;
        
        for (int x : b) {
            if (m[x] == 0) return false;
            m[x]--;
        }
        return true;
    }
};
