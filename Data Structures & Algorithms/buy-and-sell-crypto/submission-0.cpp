class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit = 0;
        int n = prices.size();
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                if(prices[i] < prices[j]){
                    int currentprofit = prices[j] - prices[i];
                    maxprofit = max(maxprofit, currentprofit);
                }
            }
        }
        return maxprofit;
    }
};
