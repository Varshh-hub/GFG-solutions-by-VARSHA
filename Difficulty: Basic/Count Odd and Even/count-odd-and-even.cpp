class Solution {
  public:
    // Function to count even and odd elements in the array
    pair<int, int> countOddEven(vector<int> &arr) {
        int odd = 0;
        int even = 0;
        int n = arr.size();

        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0)
                even++;
            else
                odd++;
        }

        return make_pair(odd, even);
    }
};
