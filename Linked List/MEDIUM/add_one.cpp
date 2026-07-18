/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/

class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* temp = head;
        ListNode* prev = NULL;
        while(temp != NULL){
            ListNode* front = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    ListNode *addOne(ListNode *head) {
        head = reverse(head);
        ListNode* temp = head;
        int carry = 1;
        while(temp != NULL){
            temp-> val= temp->val + carry;
            if(temp -> val < 10){
                carry = 0;
                break;
            }
            else{
                carry =(temp -> val) / 10 ;
                temp -> val = (temp -> val) % 10; 
            }
            temp = temp -> next;
        }
        if(carry){
            ListNode* newNode = new ListNode(carry);
            head = reverse(head);
            newNode -> next = head;
            return newNode;
        }
        head = reverse(head);
        return head;
    }
};