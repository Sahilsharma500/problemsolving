class Solution {
  public:
    void deleteAllOccurOfX(struct Node** head_ref, int x) {
    Node* current = *head_ref;
    Node* next = NULL;

    while (current != NULL) {
        if (current->data == x) {
            next = current->next;
            if (current == *head_ref) {
                *head_ref = next;
            }
            if (current->next != NULL) {
                current->next->prev = current->prev;
            }
            if (current->prev != NULL) {
                current->prev->next = current->next;
            }
            delete(current);
            current = next;
        } else {
            current = current->next;
        }
    }
    }
    };
