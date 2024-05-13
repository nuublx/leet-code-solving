class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0, r = 1, max_profit = INT_MIN;
        while (r < prices.size()){
            int current_profit = prices[r] - prices[l];
            if (current_profit > 0 && current_profit > max_profit){
                max_profit = current_profit;
            }
            else if (current_profit < 0){
                l = r;
            }
            r++;
        }
        return max_profit == INT_MIN ? 0 : max_profit;
    }
};