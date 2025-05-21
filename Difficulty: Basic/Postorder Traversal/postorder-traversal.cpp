
// User function Template for C++

/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
        // Your code here

    void iot(Node* root, vector<int>& res) {
        if (root == nullptr)
            return ;
        iot(root->left, res);
        iot(root->right, res);
        res.push_back(root->data);
    }
    vector<int> postOrder(Node* root) {
        vector<int> res;
        iot(root, res);
        return res;
    }
};

