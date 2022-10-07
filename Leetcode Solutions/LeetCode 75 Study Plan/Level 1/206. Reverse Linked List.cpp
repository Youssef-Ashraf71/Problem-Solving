
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(!head) return head;

        ListNode* curr = head;
        ListNode* prev = NULL;
        while(head){
            curr = head->next;
            head->next = prev;
            prev = head;
            head = curr;
        }
        return prev;
    }
};