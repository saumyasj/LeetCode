class Solution {
public:
    bool isPalindrome(string s) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int left=0, right=s.length()-1;
        while(left<right){
            while(isalnum(s[left])==false && left<right) left++;
            while(isalnum(s[right])==false && left<right) right--;
             
            if(toupper(s[left]) != toupper(s[right])) return false;
            ++left;--right;
            
        }
        return true;
    }
};
