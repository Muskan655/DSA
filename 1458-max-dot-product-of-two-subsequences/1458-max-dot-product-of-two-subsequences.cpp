class Solution {
public:
    int maxDotProduct(vector<int>& nums1, vector<int>& nums2) {
        int a=nums1.size();
        int b=nums2.size();
        
        vector<vector<int>>dp(a+1, vector<int>(b+1,INT_MIN));
        /*using dp bottom up approach here...dp[i][j] means max dot product starting from i-1and j-1 index of both vectors...three cases thus here 1.either including the elements2.either ignoring ist array element and move on...3.either ignoring or not including 2nd array elemnt and move forward!...4.and case in which both would not be taken into consideration is previous one as dp[i-2][j-2] so need to include it here thus find maximum out of these options....*/
        
        for (int i = 1; i <= a; ++i) {
            for (int j = 1; j <= b; ++j) {
                //if any product subpart going to be neg just take 0
                dp[i][j] = max(nums1[i - 1] * nums2[j - 1] + max(dp[i - 1][j - 1], 0),
                              max(dp[i - 1][j], dp[i][j - 1]));
            }
        }
        
        return dp[a][b];
    }
};

