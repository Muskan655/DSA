class Solution {
public:
    int reverse(int x) {
        int a;
        long long int b=0;
        while(x!=0){
            a=x%10;
            b=b*10+a;
            x=x/10;
        }
        if(b>INT_MIN&&b<INT_MAX){
            return b;
        }
      else{
          return 0;
      }
    }
    
};