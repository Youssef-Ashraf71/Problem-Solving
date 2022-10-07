/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 struct Node {
    int data;
    struct Node* next;
};
#include<map>
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
          map<ListNode *,int>vis;
          ListNode *cpy; cpy=head;
           vis[cpy]=1;
          while(cpy!=NULL){
            // cout<<cpy->val<<" "<<cpy->next<<endl;
             if(vis[cpy->next]){
                 cpy=cpy->next; return cpy;
             }
             vis[cpy->next]=1;
             cpy=cpy->next;
          }
           cpy=NULL;
          return cpy;
          }

};