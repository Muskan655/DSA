class Solution {
public:
    bool winnerOfGame(string colors) {
        int m=0,j=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]=='A'&&colors[i-1]=='A'&&colors[i+1]=='A'){
               m++; 
            }
            if(colors[i]=='B'&&colors[i-1]=='B'&&colors[i+1]=='B'){
               j++; 
            }
            
            
        }
        return m>j?true:false;
        
        
        
    }
};