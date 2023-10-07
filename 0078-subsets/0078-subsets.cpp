class Solution {
public:
    void func(vector<int>& nums,int i,vector<vector<int>>& v,vector<int> & s){
        if(i==nums.size()){
            v.push_back(s);
            return;
        }
       
        s.push_back(nums[i]);
        
         func(nums,i+1,v,s);
         s.pop_back();
         func(nums,i+1,v,s);
        return;
        
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>s;
        func(nums,0,v,s);
        return v;
    }
};