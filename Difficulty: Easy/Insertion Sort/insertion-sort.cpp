class Solution {
  public:
    // Please change the array in-place
    void insertionSort(vector<int>& arr) {
        // code here
        int n = arr.size();
        for (int i = 1; i < n; i++) {
            int max = arr[i];
            int j = i - 1;
            while (j >= 0 && arr[j] > max) {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = max;
        }
    }
};
