class Solution {
public:
    //int sumCounts(vector<int>& nums) {
        

 int sumCounts(vector<int>& nums) {
    int result = 0;
    int n = nums.size();
    unordered_map<int, int> freq; // A hash map to store the frequency of each element.
    int distinctCount = 0; // Initialize the distinct count to 0.
    int i=0;
     int j=0;
     
     set<int>s;
     for(int i=0;i<nums.size();i++){
         j=i;
       while(j<nums.size()){
        s.insert(nums[j]);
        result+=s.size()*s.size();
        j++;
        
    }    
      s.clear(); 
     }
    return result;
}
};
