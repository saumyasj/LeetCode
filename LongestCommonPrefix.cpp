class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        if (strs.size()==0) return "";
        for (int i=0; i<strs[0].length(); i++)
            for (int j=0; j<strs.size(); j++)
                if ( !(i<strs[j].length() && strs[0][i]==strs[j][i]) )
                    return strs[0].substr(0, i);
        return strs[0];
        
         
//         if(strs.size() == 0) return "" ; 
        
//         string prefix = strs[0] ; 
        
//         for(int i = 1 ; i < strs.size() ; i++)
//         {
//             for( ; strs[i].find(prefix) != 0 ;)
//                 prefix = prefix.substr(0,prefix.size() - 1);
//         }
        
//         return prefix ;
        
    }
};
