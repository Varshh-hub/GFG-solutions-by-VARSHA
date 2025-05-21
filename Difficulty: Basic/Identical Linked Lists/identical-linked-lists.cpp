
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/
class Solution {
public:
    bool areIdentical(struct Node *h1, struct Node *h2) {
        if (h1 == NULL && h2 == NULL) return true;
        if (h1 == NULL || h2 == NULL) return false;

        while (h1 != NULL && h2 != NULL) {
            if (h1->data != h2->data) {
                return false;
            }
            h1 = h1->next;
            h2 = h2->next;
        }

        return (h1 == NULL && h2 == NULL);
    }
};


