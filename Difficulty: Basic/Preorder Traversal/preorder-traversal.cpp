
/* A binary tree node has data, pointer to left child
   and a pointer to right child

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
    // Function to return a list containing the preorder traversal of the tree.
        // write code here

    void pot(Node* root, vector<int>& res) {
        if (root == nullptr)
            return ;
        res.push_back(root->data);
        pot(root->left, res);
        pot(root->right, res);
    }
    vector<int> preorder(Node* root) {
        vector<int> res;
        pot(root, res);
        return res;
    }
};

