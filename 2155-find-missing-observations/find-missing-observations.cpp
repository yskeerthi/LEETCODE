class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int m=rolls.size();
        int num=m+n;
        int sum=mean*num;int sum1=0;

        for(auto i:rolls) sum1+=i;

        sum-=sum1;
        if(sum<n || sum>n*6) return {};

        vector<int>vec;
        
        while(n){
            int avg=sum/n;
            if(n==1) vec.push_back(sum);
            else vec.push_back(avg);
            sum-=avg;
            n--;

        }
        return vec;
    }
};