class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //int left = 0;
        //int right = 1;
        if (prices.size() == 1) {return 0;}
        int buy = 100;
        //int sell = prices[1];
        int profit = -1;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (profit < prices[i] - buy) {
                profit = prices[i] - buy;
            }
        }
        if (profit < 1) {
            return 0;
        } else {
            return profit;
        }
    }
};
