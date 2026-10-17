class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minp =prices[0], maxp=0;
        int profit = 0;
        for(int i =0; i<prices.size(); i++){
            minp = min(minp, prices[i]);
            profit = prices[i] - minp;
            maxp = max(profit, maxp);
        } return maxp;
    }
};