class Solution {
  public:
    int KthDistinct(vector<int> nums, int k) {
        // Code here.
        unordered_map<int, int> m;
        int n = nums.size();

        for (int i = 0; i < n ; i++) {
            m[nums[i]]++;
        }

        for (int i = 0; i < n; i++) {
            if (m[nums[i]] == 1) {
                k--;
                if (k == 0) return nums[i];
            }
        }

        return -1;
    }
};
