//121. Best Time to Buy and Sell Stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mprice = INT_MAX;
        int mprofit = 0;
        for(int i=0;i<prices.size();i++)
        {
            mprice = min(mprice, prices[i]);
            mprofit = max(mprofit, prices[i]-mprice);
        }
        return mprofit;
    }
};