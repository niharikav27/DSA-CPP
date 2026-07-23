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
    ListNode* findMiddle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;
        while(fast != NULL && fast -> next != NULL){
            slow = slow -> next;
            fast = fast -> next -> next;
        }
        return slow;
    }
    ListNode* mergeLL(ListNode* list1 , ListNode* list2){
        ListNode* dummyNode = new ListNode(-1);
        ListNode* res = dummyNode;
        while(list1 != NULL && list2 != NULL){
            if(list1->val < list2->val){
                res->next = list1;
                res = list1;
                list1 = list1->next;
            }
            else{
                res->next = list2;
                res = list2;
                list2 = list2->next;
            }
            res->next = NULL;
        }
        if(list1){
            res->next = list1;
        } else {
            res->next = list2;
        }
        
        return dummyNode->next;
        
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head -> next == NULL) return head;
        ListNode* middle = findMiddle(head);
        ListNode* right = middle -> next;
        middle -> next = NULL;
        ListNode* left = head;

        left = sortList(left);
        right = sortList(right);
        return mergeLL(left, right);
    }
};

