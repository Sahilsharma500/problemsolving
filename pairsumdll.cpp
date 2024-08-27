class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        Node* front = head;
        Node* back = head;
        
        vector<pair<int, int>> answer;
        
        while(back->next != NULL){
            back = back -> next;
        }
        
        while(front->data < back->data){
            int one1 = front->data;
            int two2 = back->data;
            
            int sum = front->data + back->data;
            
            if(sum == target){
            answer.push_back({one1,two2});
            front = front->next;
            back = back->prev;
        }
            else if(sum > target){
                back = back->prev;
            }
            else{
                front = front->next;
            }
        }
        return answer;
    }
};
