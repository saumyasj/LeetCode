class Solution {
public:
    bool isAnagram(string s, string t) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        // if(s.size()!=t.size()) return false;
        int count[26]={0};
        for(int i=0;i<s.length();i++)
            count[s[i]-'a']++;
        // for(int i=0;i<t.size();i++){
        //     if(count[t[i]-'a']==0) return -1;
        //     else
        //         count[t[i]-'a']++;
        // }
        // return 0;
        
        for(int i=0;i<t.length();i++)
            count[t[i]-'a']--;
        for(int i=0;i<26;i++)
            if(count[i]!=0) 
                return false;
        return true;
    }
};
