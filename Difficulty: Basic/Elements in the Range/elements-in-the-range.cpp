class Solution {
  public:
    bool check_elements(int arr[], int n, int A, int B) {
        // Your code goes here
        unordered_set<int> s(arr, arr + n);
        for (int i = A; i <= B; i++) {
            if (s.find(i) == s.end()) {
                return false;
            }
        }
        return true;
    }
};


