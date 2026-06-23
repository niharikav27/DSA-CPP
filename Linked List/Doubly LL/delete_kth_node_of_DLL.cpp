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
    ListNode *deleteTail(ListNode *&head) {
        if(head == NULL || head -> next == NULL) return NULL;
        ListNode* tail = head;
        while(tail -> next != NULL){
            tail = tail -> next;
        }
        ListNode* newTail = tail -> prev;
        newTail -> next = nullptr;
        tail -> prev = nullptr;
        delete tail;
        return head;
    }
    ListNode *deleteHead(ListNode *&head) {
        if(head == NULL || head -> next == NULL){
            return NULL;
        }
        ListNode* temp = head;
        head = head -> next;
        head -> prev = nullptr;
        temp -> next = nullptr;
        delete temp;
        return head;
    }
    ListNode *deleteKthElement(ListNode *&head, int k) {
        if(head == NULL) return NULL;
        int cnt = 0 ;
        ListNode* temp = head;
        while(temp != NULL){
            cnt++;
            if(cnt == k) break;
            temp = temp->next;
        }
        ListNode* back = temp->prev;
        ListNode* front = temp->next;
        if(back == NULL && front == NULL){
            delete temp;
            return NULL;
        }
        else if(back == NULL){
            return deleteHead(head);
        }
        else if(front == NULL){
            return deleteTail(head);
        }
        else{
            back->next = front;
            front->prev = back;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            return head;
        }
    }
};