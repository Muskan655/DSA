class Solution {
public:
    //using prims algo here take priority queue start with any source node insert its child elemnts in queue min weight comes at top of queue then same thing apply on it at last we get min weight total....
    int minCostConnectPoints(vector<vector<int>>& points) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>p;
       
       vector<int>visited(points.size(),0);
        p.push({0,0});
        int sum=0;
        while(!p.empty()){
           
            auto it=p.top();
            p.pop();
            if(!visited[it.second]){
            visited[it.second]=1;
            sum+=it.first;
            //here no graph so consider all nodes as its childs nodes...
            for(int i=0;i<points.size();i++){
                if(visited[i]==0){
                    auto dis=abs(points[i][0]-points[it.second][0])+abs(points[i][1]-     points[it.second][1]);
                    p.push({dis,i});
                    
                }
                
                
            }
            
            
            }
            
            
        }
            
           return sum; 
            
        
        
    }
};