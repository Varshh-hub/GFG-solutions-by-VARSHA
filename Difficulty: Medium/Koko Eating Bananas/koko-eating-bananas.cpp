class Solution {
public:
    int kokoEat(vector<int>& piles, int k) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int ans = right;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long hours = 0;
            
            for (int pile : piles) {
                hours += (pile + mid - 1) / mid;
            }
            
            if (hours <= k) {
                ans = mid;
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        
        return ans;
    }
};