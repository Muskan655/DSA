class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int count=0,count1=0;
        for(int i=0;i<strs[0].length();i++){
            for(auto val:strs){
                if(val[i]==strs[0][i]){
                    count1++;
                }
                else{
                    break;
                }
            }
            if(count1==strs.size()){
                count++;
            }
            else{
                break;
            }
            count1=0;
        }
        return strs[0].substr(0,count);
        
    }
};