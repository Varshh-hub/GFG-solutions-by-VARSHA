// User function Template for C++

// Complete this function
class Solution {
  public:
    void reverseArray(vector<int>& arr) {

        // Your code here
        
        stack<int> st;

        for (int val : arr) {
            st.push(val);
        }

        for (int i = 0; i < arr.size(); ++i) {
            arr[i] = st.top();
            st.pop();
        }
    }
};
        
