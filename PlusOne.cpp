class Solution {
public:
    vector<int> plusOne(vector<int>& a) {
        bool carry=true;
        
        for(int i=a.size()-1;i>=0 && carry; i--){
            if(a[i]!=9) {
                a[i]++;
                break;
            }
            a[i]=0;
        }
        if(a[0]==0)
            a.insert(a.begin(),1);
        
        return a;
    }
};
