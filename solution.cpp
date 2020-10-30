class Solution {
public:
    bool isPalindrome(int x) {
        
        //Follow up
        int tmp=x;
        
        if(x<0)
            return false;
        
        long y=0;
        while(x>0)
        {
            y = y*10 + x%10;
            x/=10;
        }
        
        return y==tmp;
    }
};
