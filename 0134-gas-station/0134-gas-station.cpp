class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        //greedy approach....
        
        int extra= 0;
        int  shortage= 0;
        int a= 0;
        for(int i=0; i<gas.size(); i++){
            //simply find extra oil in each step 
            extra += gas[i] - cost[i];
            //if shortage prevails thus extra becomes 0 and goes on counting shortage...
            //as yhan shortage aaye index updated to nextone..
            //so jis index ke baad shortage aayi nhi vo best soln hai as after that extra milta jaega jo during circular round hum phle valo ki shortage me lgaa paenge....
            if(extra< 0){
                shortage+=extra;
                a= i + 1;
                extra= 0;
            }
        }
        if(extra +shortage>= 0){
            return a;
        }
    return -1;}};