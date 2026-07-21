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
    int findLengthOfLoop(ListNode *head) {
        unordered_map<ListNode* , int>mpp;
        ListNode* temp = head;
        int timer = 0;
        while(temp != NULL){
            timer++;
            if(mpp.find(temp) != mpp.end()) {
                int value = mpp[temp];
                return (timer - value);
            }
            mpp[temp] = timer;
            temp = temp -> next;
        }
        return 0;
    }
};