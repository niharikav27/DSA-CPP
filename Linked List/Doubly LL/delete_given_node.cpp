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
    void deleteGivenNode(ListNode *node) {
        ListNode* back = node->prev;
        ListNode* front = node->next;
        if(front == NULL){
            back->next = nullptr;
            node->prev = nullptr;
            delete node;
            return;
        }
        back -> next = front;
        front -> prev = back;
        node -> next = nullptr;
        node -> prev = nullptr;
        delete node;
    }
};