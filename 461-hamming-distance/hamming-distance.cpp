class Solution {
public:
    int hammingDistance(int x, int y) {
        int c=0;
        for(int i=31;i>=0;i--)
        {
            int mask=1<<i;
            if((x& mask)!=(y&mask))
            {
                c++;
            }
        }
        return c;
    }
};