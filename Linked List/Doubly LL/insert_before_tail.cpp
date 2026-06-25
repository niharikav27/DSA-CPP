/**
class ListNode
{
 * Definition for doubly-linked list.
 *  public:
 *      int data;
 *      ListNode *prev;
 *      ListNode *next;
 *      ListNode() : data(0), prev(nullptr), next(nullptr) {}
 *      ListNode(int x) : data(x), prev(nullptr), next(nullptr) {}
 *      ListNode(int x, ListNode *prev, ListNode *next) : data(x), prev(prev), next(next) {}
};
*/

class Solution {
public:
    ListNode* insertBeforeHead(ListNode* head, int X) {
        ListNode* newHead = new ListNode(X , nullptr , head);
        head -> prev = newHead;
        return newHead;
    }
    ListNode* insertBeforeTail(ListNode* head, int X) {
        if(head->next == NULL){
            return insertBeforeHead(head , X);   
        }
        ListNode* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }
        ListNode* back = tail -> prev;
        ListNode* newNode = new ListNode(X, back, tail);
        back->next = newNode;
        tail->prev = newNode;
        return head;
    }
};
