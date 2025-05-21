
/*
  Node is defined as
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }
}*head;
*/
class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        int c = 0;
        Node* curr = head;
        while(curr){
            if(curr -> data == key)
            c++;
        curr = curr -> next;
        }
        return c;
    }
};

