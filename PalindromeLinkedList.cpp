class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        ListNode *fast=head, *slow=head;
        vector<int> v;
        while(fast!=NULL){
            v.push_back(fast->val);
            fast=fast->next;
            
        }
        int i=0, j=v.size()-1;
        while(i<j){
            if(v[i]!=v[j]) return false;
            i++;
            j--;
        }
        return true;
        
    }
};
