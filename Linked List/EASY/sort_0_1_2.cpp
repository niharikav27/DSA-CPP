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
        ListNode* sortList(ListNode* &head) {
            int cnt0 = 0, cnt1 = 0, cnt2 = 0;
            ListNode* temp = head;
            while(temp){
                if(temp -> data == 0) cnt0++;
                else if (temp -> data == 1) cnt1++;
                else cnt2++;
                temp = temp -> next;
            }
            temp = head;
            while(temp){
                if(cnt0){
                    temp->data = 0;
                    cnt0--;
                }
                else if(cnt1) {
                    temp->data = 1;
                    cnt1--;
                }
                else{
                    temp->data = 2;
                    cnt2--;
                }
                temp = temp->next;
            }
            return head;
        }
};