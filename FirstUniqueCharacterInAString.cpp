class Solution {
public:
    int firstUniqChar(string s) {
        ios_base::sync_with_stdio(0);
	    cin.tie(0);
        int count[256]={0};
        for(auto i: s){
            count[i]++;
        }
        for(int i=0;i<s.length();i++){
            if(count[s[i]]==1) return i;
        }
        return -1;
    }
};
