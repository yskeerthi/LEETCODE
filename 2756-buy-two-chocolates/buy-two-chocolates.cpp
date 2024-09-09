class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int count=0,ans=money;
        sort(prices.begin(),prices.end());
        for(int i = 0; i<prices.size(); i++){
            if(count == 2){
                break;
            }
            ans -= prices[i];
            count++;
        
        }
        if(ans < 0)
            return money;
        return ans;
    }
};