class Solution {
public:
int check(int mid,vector<int>& bloomDay,int k)
{
    long long int c=0,tcount=0;
    for(int i=0;i<bloomDay.size();i++)
    {
        if(bloomDay[i]<=mid)
        {
            c++;
            if(c==k)
            {
                tcount++;
                c=0;
                
            }
        }
        else{
            c=0;
        } 
    }
    return tcount;
}
    int minDays(vector<int>& bloomDay, int m, int k) {
         int tcount=0,c=0;
        int s=bloomDay.size();
            int low=*min_element(bloomDay.begin(),bloomDay.end());
            int high=*max_element(bloomDay.begin(),bloomDay.end());
            int ans=-1;
            int mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(check(mid,bloomDay,k)>=m)
                {
                    ans=mid;
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
                
            }
            return ans;
        }
};