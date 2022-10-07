/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 struct Node {
    int data;
    struct Node* next;
};
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* cpy;
        cpy=head;
        int cnt=0;
        while(cpy!=NULL){
          cnt++;
          cpy=cpy->next;
        }
        int mid=cnt/2; cnt=0;
            while(head!=NULL){
            if(cnt==mid) break;
            cnt++; head=head->next;

        }

      return head;
    }
};