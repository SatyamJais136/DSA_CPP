class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mx = 0;
        int mn = INT_MAX;
        for(int i = 0; i < n; i++){
            if(prices[i] < mn) mn = prices[i];
            else if(prices[i] - mn > mx) mx = prices[i] - mn;
        }
        return mx;
    }
};