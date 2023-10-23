class Solution {
public:
    //here using binary search we are finding min elemnt in sorted rotated array
    int findMin(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int val=nums[0];
        while(low<=high){
            int mid=(low+high)/2;
            //this ensure that on left side of mid array is sorted so take its first one and move to right side
            if(nums[low]<=nums[mid]){
                val=min(val,nums[low]);
                low=mid+1;
            }
            //this condition tell that on right side of mid array is sorted and move to left side thus we will got min element....
            else if(nums[mid]<=nums[high]){
                high=mid-1;
                val=min(val,nums[mid]);
                
            }
            
            
            
        }
        return val;
    }
};