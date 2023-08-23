class Solution {
public:
    int lengthOfLongestSubstring(string s) {
   if(s.size()==0){
       return 0;
   }
        int maxlen=0;
        vector<int>m(256,-1);
        int left=0,right=0;
        while(right<s.length()){
            if(m[s[right]]!=-1){
                left=max(left,m[s[right]]+1);
            }
            m[s[right]]=right;
            maxlen=max(maxlen,(right-left+1));
            right++;
        }
        
        return maxlen;
       
    
    }




};