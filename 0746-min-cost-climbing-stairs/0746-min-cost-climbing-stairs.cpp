class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
         int n = cost.size();
    vector<int>dp(n,0);
    //making two choices intially
    dp[0] = cost[0];
    dp[1] = cost[1];
    //simply you are adding its cost either ek peeche ya do peeche me se jo min lge it depicts one step or 2 step respectively.....
    for (int i = 2; i < n; i++) {
        dp[i] = cost[i] + min(dp[i - 1], dp[i - 2]);
    }
    //at the end either like 0 or 1 index last ke do index me jo min dega return it just...
    return min(dp[n - 1], dp[n - 2]);

    }
};