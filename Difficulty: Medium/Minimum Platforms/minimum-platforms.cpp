class Solution {
  public:
    // Function to find the minimum number of platforms required at the
    // railway station such that no train waits.
    int findPlatform(vector<int>& arr, vector<int>& dep) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        int count = 0;
        int res = 0;
        int j = 0;
        for(int i = 0; i < n; i++){
            while(j < n && dep[j] < arr[i]){
                j++;
                --count;
            }
            ++count;
            res = max(count, res);
        }
        return res;
    }
};
