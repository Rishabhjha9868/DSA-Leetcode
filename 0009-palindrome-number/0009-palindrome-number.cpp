class Solution {
public:
    bool isPalindrome(int x) {
        int m =x;
       long long reverse = 0;
        while(m!=0)
        {
            reverse = reverse*10 +m%10;
            m = m/10;
        }
        if(x<0){
            return false;
        }
       else if(reverse==x)
        {
            return true;
        }
        return false;
    }
};