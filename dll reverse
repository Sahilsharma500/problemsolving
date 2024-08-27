/*
class DLLNode {
  public:
    int data;
    DLLNode *next;
    DLLNode *prev;

    DLLNode(int val) {
        data = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
*/
class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        DLLNode* prev = NULL;
        DLLNode* curr = head;
        DLLNode* next = NULL;
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            curr->prev = next;
            prev = curr;
            curr=next;
        }
        return prev;
    }
};
