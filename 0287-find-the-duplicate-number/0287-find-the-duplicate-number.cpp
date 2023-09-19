class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
           
        }
        int a=-1;
        for(auto i:m){
            if(i.second>1){
               a=i.first;
            }
        }
       return a; 
    }
};