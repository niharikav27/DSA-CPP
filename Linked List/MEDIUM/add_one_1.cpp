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
    int helper(ListNode* temp){
        if(temp == NULL) return 1;
        int carry = helper(temp -> next);
        temp-> val= temp->val + carry;
        if(temp -> val < 10) return 0;
        carry =(temp -> val) / 10 ;
        temp -> val = (temp -> val) % 10; 
        return carry;       
    }
    ListNode *addOne(ListNode *head) {
        int carry = helper(head);
        if(carry){
            ListNode* newNode = new ListNode(carry);
            newNode -> next = head;
            return newNode; 
        }
        return head;
    }
};