class Solution {
public:
    int reverse(int x) {
        long y=0;
        while(x!=0){
            y=y*10 + x%10;
            x/=10;
        }
        return ( y > INT_MAX || y < INT_MIN) ? 0 :y;
    }
};
