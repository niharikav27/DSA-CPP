/*
Definition of singly linked list:
class ListNode{
  public:
    int data;
    ListNode *next;
    ListNode() : data(0), next(nullptr) {}
    ListNode(int x) : data(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : data(x), next(next) {}
};
*/

class Solution {
    public:
        ListNode* insertBeforeX(ListNode* &head, int X, int val) {
            if(head == NULL) return NULL;
            if(head -> data == X){
                return new ListNode(val , head);
            }
            ListNode* temp = head;
            while(temp -> next != NULL){
                if(temp -> next -> data == X){
                    ListNode* newNode = new ListNode(val , temp->next);
                    temp -> next = newNode;
                    break;
                }
                temp = temp -> next;
            }
            return head;
        }
};