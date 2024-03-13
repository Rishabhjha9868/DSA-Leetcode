class Solution {
public:
    int pivotInteger(int n) {
       int s = 1, e = n; 
        int sum = (n*n + n)/2;
       while(s<=e){
        int mid = (s+e)/2;
           int first = (mid*mid + mid)/2;
           int last = sum - first +mid;
           if(first==last){
               return mid;
           }
           else if(first <last){
                s = mid+1;
           }
           else{
                e = mid -1;
           }
        }
        return -1;
    }
};
