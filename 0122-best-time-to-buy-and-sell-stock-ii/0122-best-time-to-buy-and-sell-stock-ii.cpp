class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        stack<int> st;
        int maxPro = 0;
        for(int i=0; i<n; i++){
            if(!st.empty() && prices[st.top()] < prices[i]){
                int cal = prices[i] - prices[st.top()];
                maxPro += cal;
                st.pop();
            }
            st.push(i);
        }

        return maxPro;
    }
};