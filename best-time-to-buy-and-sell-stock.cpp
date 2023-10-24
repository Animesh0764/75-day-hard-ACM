class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = 0, mini = INT_MAX, len = prices.size();

        for(int i = 0; i<len; i++)
        {
            mini = min(mini, prices[i]);
            maxi = max(maxi, prices[i]-mini);
        }
        return maxi;
    }
};

//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1023608476/