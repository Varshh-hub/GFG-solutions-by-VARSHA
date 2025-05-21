
// User function template for C++

/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
  public:
  int heightofNode(Node* curr){
      if (curr == NULL) return 0;
      return max(heightofNode(curr -> left), heightofNode(curr -> right)) +1;
  }
    int height(Node* node) {
        // code here
        int h = heightofNode(node);
        return h - 1;
    }
};

