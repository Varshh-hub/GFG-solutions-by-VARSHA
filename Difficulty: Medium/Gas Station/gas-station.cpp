/*You are required to complete this method*/
class Solution {
  public:
    int startStation(vector<int> &gas, vector<int> &cost) {
        // Your code here
        int total = 0;
        int curr = 0;
        int start = 0;
        
        int n = gas.size();
        for(int i = 0; i < n; i++){
            total = total + gas [i] - cost[i];
            curr = curr + gas [i] - cost[i];
            
            if (curr < 0){
                start = i + 1;
                curr = 0;
            }
        }
        if (total >= 0) return start;
        else return -1;
    }
};