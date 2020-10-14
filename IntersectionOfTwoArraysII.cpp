class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        unordered_map<int,int> umap;
        vector<int> ans;
        for(int i=0;i<a.size();i++){
            umap[a[i]]++;
        }
        
        // for(int i:b){
        //     if(umap[i]-->0){
        //         ans.push_back(i);
        //     }
        // }
        for(int i=0;i<b.size();i++){
            if( umap.find(b[i])!=umap.end() && umap[b[i]]>0){
                ans.push_back(b[i]);
                umap[b[i]]--;
            }
        }
        
        return ans;
        }
    
};
