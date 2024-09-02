class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long long int sum=0;
        long long int  r;
        int n=chalk.size();
        for(int i=0;i<n;i++)
        {
            sum+=chalk[i];
        }
          r=k%sum;
        for(int i=0;i<n;i++)
        {
            r-=chalk[i];
            if(r<0)
            {
                return i;
            }
        }
        return 0;
        }
    
};