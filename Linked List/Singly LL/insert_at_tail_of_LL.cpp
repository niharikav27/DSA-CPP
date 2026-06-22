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
        ListNode* insertAtTail(ListNode* &head, int X) {
            if(head == NULL){
                return new ListNode(X);
            }
            ListNode* temp = head;
            while( temp -> next != NULL){
                temp = temp -> next;
            }
            ListNode* newNode = new ListNode(X);
            temp -> next = newNode;
            return head;
        }
};