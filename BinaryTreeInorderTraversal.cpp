class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
         stack<TreeNode*>s;
        TreeNode* temp = root;
        vector<int>res;
        while(temp!=NULL || s.empty()==false)
        {
            
            while(temp!=NULL)
            {
                s.push(temp);
                temp=temp->left;
            }        
            
        temp=s.top();
        s.pop();
        res.push_back(temp->val);
        
        temp=temp->right;
        }
        return res;
        }
};
