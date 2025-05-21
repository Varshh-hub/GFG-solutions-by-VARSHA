
// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        // Write your code here
        if (root == NULL) return 0;
        return countNodes(root -> left) + 1 + countNodes (root -> right);
    }
};

