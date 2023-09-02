class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
//just for each number go on adding reminder on dividing by 2 as we do during conversion of decimal into binary same procedure here go 
        for(int i=0;i<=n;i++){
            int sum=0;
            int num=i;
            while(num!=0){
               sum+=num%2;
                num=num/2;
              
           }
            ans.push_back(sum);
            
            
        }
        return ans;
        
        
    }
};