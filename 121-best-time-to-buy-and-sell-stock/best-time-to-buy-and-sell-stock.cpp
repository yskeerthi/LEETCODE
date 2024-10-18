class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=INT_MAX;
        int max_pro=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min_price)
            {
                min_price=prices[i];
            }
             int pro=prices[i]-min_price;
            if(max_pro < pro)
            {
                max_pro=pro;
            }
        }
       return max_pro; 
    }
};