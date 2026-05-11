class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxGet = 0;
        int minSto = prices[0];
        for(int i=1; i<n; i++){
            minSto = min(minSto, prices[i]);
            maxGet = max(maxGet, prices[i] - minSto);
        }

        return maxGet;
    }
};