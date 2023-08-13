class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>p;
        vector<int>n;
        int count=0;
        for(int i=0;i<nums.size();i++){
        if(nums[i]<pivot){
            n.push_back(nums[i]);
        }
        else if(pivot==nums[i]){
            count++;
        }
        else{p.push_back(nums[i]);

        }
        }
       nums.clear();
       int i=0;
       while(i<n.size()){
           nums.push_back(n[i]);
           i++;
       }
       while(count--){
           nums.push_back(pivot);
       }
       i=0;
       while(i<p.size()){
           nums.push_back(p[i]);
           i++;
       }

       return nums;


        }
        
    
};