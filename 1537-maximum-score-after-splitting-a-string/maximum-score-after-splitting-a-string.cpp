class Solution {
public:
    int maxScore(string s) {
       int n=s.size();
       int ro=0,lz=0,maxi=0;
        for(char i : s)
        {
            if(i=='1')
            {
                ro++;
            }
        }
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0')
            {
                lz++;
            }
            else{
                ro--;
            }
            maxi=max(maxi,lz+ro);
        }
        return maxi;
    }
};