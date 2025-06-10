class Solution {
public:
    void reverseInGroups(std::vector<int>& arr, int k) {
        int n = arr.size();
        if (k >= n) {
            reverse(arr.begin(), arr.end());
            return;
        }
        
        for (int i = 0; i < n; i += k) {
            int left = i;
            int right = min(i + k - 1, n - 1);
            while (left < right) {
                swap(arr[left], arr[right]);
                left++;
                right--;
            }
        }
    }
    
};
