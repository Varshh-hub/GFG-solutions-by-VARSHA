class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        if (n <= 1) return 0;
        if (arr[0] == 0) return -1;

        int maxr = arr[0];
        int steps = arr[0];
        int jumps = 1;

        for (int i = 1; i < n; ++i) {
            if (i == n - 1) return jumps;

            maxr = max(maxr, i + arr[i]);
            steps--;

            if (steps == 0) {
                jumps++;
                if (i >= maxr) return -1;
                steps = maxr - i;
            }
        }

        return -1;
    }
};
