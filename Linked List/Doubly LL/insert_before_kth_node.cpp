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
    ListNode* insertBeforeKthPosition(ListNode* head, int X, int K) {
        if(K == 1){
            return insertBeforeHead(head , X);
        }
        ListNode* temp = head;
        int cnt = 0;
        while( temp != NULL){
            cnt++;
            if(cnt == K) break;
            temp = temp -> next;
        }
        ListNode* back = temp -> prev;
        ListNode* newNode = new ListNode(X, back, temp);
        back -> next = newNode;
        temp -> prev = newNode;
        return head;
    }
};