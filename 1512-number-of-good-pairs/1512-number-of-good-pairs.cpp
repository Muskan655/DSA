class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
            
        }
        int a=0;
        for(auto i:m){
           
            for(int j=1;j<i.second;j++){
                
                a+=j;
            }
            
        }
       return a; 
    }
};