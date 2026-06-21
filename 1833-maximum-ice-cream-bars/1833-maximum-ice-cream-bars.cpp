class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
        int maxIce = 0;
        for(auto cost : costs){
            if(coins >= cost){
                coins -= cost;
                maxIce++;
            }
            else break;
        }

        return maxIce;
    }
};