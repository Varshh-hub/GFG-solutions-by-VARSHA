// User function template for C++
class Solution {
  public:

    int maxProduct(vector<int>& arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        return max(arr[n - 1] * arr[n - 2], arr[0] * arr[1]);
    }
};

