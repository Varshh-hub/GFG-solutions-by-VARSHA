// User function template for C++
class Solution {
  public:
    int findSum(vector<int>& arr) {
        // code here
        unordered_set<int> s;
        for(int num : arr){
            s.insert(num);
        }
        
        int sum = 0;
        for(int num : s){
            sum = sum + num;
        }
        return sum;
    }
};