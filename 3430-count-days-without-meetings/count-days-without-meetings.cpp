class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        sort(meetings.begin(),meetings.end());

        int start=0,end=0,ans=0;

        for(auto &meet:meetings){
            if(meet[0]>end){
                ans+=meet[0]-end-1;
            }
            end=max(end,meet[1]);
        }
        if(days>end) ans+=days-end;
        return ans;
    }
};