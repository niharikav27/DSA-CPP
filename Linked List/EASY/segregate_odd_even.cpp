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
            if(head == NULL || head->next == NULL){
                return head;
            }
            vector<int>ans;
            ListNode* temp = head;
            while(temp != NULL &&  temp-> next != NULL){
                ans.push_back(temp -> data);
                temp = temp -> next -> next;
            }
            if(temp){
                ans.push_back(temp -> data);
            }
            temp = head -> next;
            while(temp != NULL &&  temp-> next != NULL){
                ans.push_back(temp -> data);
                temp = temp -> next -> next;
            }
            if(temp){
                ans.push_back(temp -> data);
            }
            temp = head;
            int i = 0;
            while(temp != NULL){
                temp -> data = ans[i];
                i++;
                temp = temp -> next;
           }
           return head;
        }
};