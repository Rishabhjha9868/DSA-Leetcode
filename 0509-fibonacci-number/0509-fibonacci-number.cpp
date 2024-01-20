class Solution {
public:
    int fib(int n) {  
 int a=0;
        int b=1;
        int sum;
        if(n==0|| n==1)
        {
            return n;
        }
        else{
            int i=2;
            while(i<=n)
            {
                sum =a+b;
                a=b;
                b=sum;
                i++;
            }
            return sum;
        }
        
    }
};