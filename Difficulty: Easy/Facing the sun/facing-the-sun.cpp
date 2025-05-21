
// User function template for C++
class Solution {
  public:
    // Returns count buildings that can see sunlight
    int countBuildings(vector<int> &h) {
        // code here
        int n = h.size();
        int count = 1; 
        int maxc = h[0];
        
        for(int i = 1; i < n; i++){
            if(maxc < h[i]){
                maxc = h[i];
                count++;
            }
        }
        return count;
        
    }
};

