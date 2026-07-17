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
        ListNode* oddEvenList(ListNode* &head) {
            if(head == NULL || head -> next == NULL) return head;
            ListNode* odd = head;
            ListNode* even = head -> next;
            ListNode* evenHead = head -> next;
            while(even != NULL && even->next != NULL){
                odd -> next = odd -> next -> next;
                even -> next = even -> next -> next;

                odd = odd -> next;
                even = even -> next;
            }           
            odd -> next = evenHead;
            return head;
        }
};