// Question Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minP = prices[0];
        for(int i=0; i<prices.size(); i++){
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i]-minP);
        }
        return maxP;
    }
};