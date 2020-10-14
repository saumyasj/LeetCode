class Solution {
public:
    ListNode* reverseList(ListNode* curr) {
        if(curr==NULL || curr->next==NULL) return curr;
        ListNode* newhead=reverseList(curr->next);
        curr->next->next=curr;
        curr->next=NULL;
        return newhead;
        
        
    }
};
