class Solution {
public:
    int arrangeCoins(int n) {
        int i=1,c=0;
       while(n>=i)
       {
         n-=i;
         c++;
         i++;
       }
       return c;
    }
};