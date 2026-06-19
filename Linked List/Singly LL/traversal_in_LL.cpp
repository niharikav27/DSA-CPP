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
    vector<int> LLTraversal(ListNode *head) {
       ListNode* temp = head;
       vector<int>ans;
       while(temp){
           ans.push_back(temp -> data);
           temp = temp -> next;
       }
       return ans;
    }
};