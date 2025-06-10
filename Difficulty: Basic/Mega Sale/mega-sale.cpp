class Solution {
public:
    int maxProfit(int m, vector<int>& arr) {
        vector<int> bad;
        
        for (int price : arr) {
            if (price < 0) {
                bad.push_back(price);
            }
        }

        sort(bad.begin(), bad.end()); 

        int profit = 0;
        for (int i = 0; i < min(m, (int)bad.size()); i++) {
            profit = profit + (-bad[i]); 
        }

        return profit;
    }
};
