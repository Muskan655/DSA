class Solution {
public:
    //in this pblm we need to find total components of a graph so simply do bfs
    void bfs(vector<int>& visited,int node,map<int,vector<int>>& adj){
        visited[node]=1;
        queue<int>q;
        q.push(node);
        while(!q.empty()){
           int top=q.front();
            q.pop();
            for(auto i:adj[top]){
                if(!visited[i]){
                    
                    visited[i]=1;
                    q.push(i);
                    
               }
                
                
                
            }
            
            
        }
        
        
        
        
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        map<int,vector<int>>adj;
        for(int i=0;i<isConnected.size();i++){
            for(int j=0;j<isConnected[0].size();j++){
                if(i!=j&&isConnected[i][j]){
                    adj[i].push_back(j);
                   
                }
                
            }
        }
           vector<int>visited(isConnected.size(),0);
            int a=0;
            for(int i=0;i<isConnected.size();i++){
                if(!visited[i]){
                    a++;
                    bfs(visited,i,adj);
                   //here as how many times it counts new compo. comes because single bfs encounter all nodes in one graph same can be done with bfs....  
                }
                
                
            }
            
            
            
        return a;
        
    }
};