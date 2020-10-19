
//link to the question :- https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy_price = INT_MAX;
        int profit = 0;
        for(int currentprice = 0 ; currentprice < prices.size(); currentprice++ )
        {
            if(prices[currentprice] < buy_price)
                buy_price = prices[currentprice];
            else
            {
                profit = max(prices[currentprice] - buy_price , profit);
            }
        }
        return profit;
    }
};
