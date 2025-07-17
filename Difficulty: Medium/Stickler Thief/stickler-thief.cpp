class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        if (arr.empty()) return 0;
        if (arr.size() == 1) return arr[0];
        
        int p1 = 0;
        int p2 = 0;
        for(int x : arr){
            int curr = max(p1, p2 + x);
            p2 = p1;
            p1 = curr;
        }
        return p1;
    }
};