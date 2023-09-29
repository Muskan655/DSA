class Solution {
public:
    /*int func(vector<int>& nums,int i){
        if(i>=nums.size()){
         return 0;
        }
        int incl=nums[i]+func(nums,i+2);
        int excl=func(nums,i+1);
        return max(incl,excl);
      
    }*/
    int rob(vector<int>& nums) {
        int n=nums.size();
       vector<int>dp(n+2);
       
       dp[n]=0;
       dp[n+1]=0;
       for(int i=n-1;i>=0;i--){
           dp[i]=max(nums[i]+dp[i+2],dp[i+1]);
       }
       return dp[0];
        
    }
};