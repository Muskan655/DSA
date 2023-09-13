class Solution {
public:
    int func(int n,vector<int>&dp){
        if(n<0){
            return INT_MAX-100;
        }
        if(n==0){
            return 0;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        int ans=INT_MAX;
        
        
            for(int i=1;i*i<=n*n;i++){
               
               ans=min(ans,func(n-(i*i),dp)+1);
               
            }
            return dp[n]=ans;
      
          }
    int numSquares(int n) {
        vector<int>dp(n+1,-1);
       return func(n,dp);
       
    }
};