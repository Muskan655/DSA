class Solution {
public:
    //using greedy approach to solve this problem maintain 2 satcks one foe open other for star if open khtam ho use star and at the end make sure open is also empty
    bool checkValidString(string s) {
        stack<int> open,star;
        for(int i=0;i<s.length();i++){
            if(s[i]==')'){
                if(!open.empty()){
                    open.pop();
                }
                else if(!star.empty()){
                    star.pop();
                }
                else{
                    return false;
                }
            }
            else if(s[i]=='('){
                open.push(i);}
            else{
                star.push(i);
            }
                
            
        }
        
        while(!open.empty()&&!star.empty()){
            if(open.top()<star.top()){
                open.pop();
                star.pop();
            }
            else{
                return false;
            }
            
            
        }
        if(open.empty()){
            return true;
        }
        else{
             return false ;
            
        }
       
    }
};