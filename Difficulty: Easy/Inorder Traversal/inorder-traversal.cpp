
/*
// Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
        // Your code here

    void iot(Node* root, vector<int>& res) {
        if (root == nullptr)
            return ;
        iot(root->left, res);
        res.push_back(root->data);
        iot(root->right, res);
    }
    vector<int> inOrder(Node* root) {
        vector<int> res;
        iot(root, res);
        return res;
    }
};
        


