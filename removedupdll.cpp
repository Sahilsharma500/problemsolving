class Solution
{
public:

   Node* removeDuplicates(struct Node* head)
{
    Node* curr = head->next; 
    Node* next = NULL;

    while (curr != NULL) {
        if (curr->data == curr->prev->data) {
            next = curr->next; 
            curr->prev->next = curr->next;
            if (curr->next != NULL) {
                curr->next->prev = curr->prev;
            }
            curr->next = NULL;
            curr->prev = NULL;
            delete curr;
            curr = next;
        } else {
            curr = curr->next; 
    }
    }
    return head;
};
};
