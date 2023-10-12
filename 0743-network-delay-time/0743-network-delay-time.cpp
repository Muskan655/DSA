class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k)
    {//set can also be used as it arrange unique elemnts in ascending order.... both are optimisially of same  level...
        
        map<int,list<pair<int,int>>>adj;
        
        for(auto i: times)
        {
            adj[i[0]].push_back(make_pair(i[1],i[2]));
        }
        vector<int>dist(n+1,INT_MAX);
        
        dist[k]=0;
        //here intialising just min heap priority queue...reason of choosing min heap is jo miniumum distance vli node hogi that will come upto top (as pair h so first elemnt consider first) then uske path pe chlne ka more benefit to get all nodes shortest dist from src node...
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        //starting from source node as its distance from itself is 0....
        pq.push({0,k});
        while(!pq.empty())
        {
            int node = pq.top().second;
            int weight = pq.top().first;
            pq.pop();
            //then just see that ki parent node ke path se dist agr jo phle childnode ka dist h usse kam aa rha toh update it parentnode dist from source plus weight....thus dist goes on updating to get min distance
            
            for(auto i: adj[node])
            {
                int adjnode = i.first;
                int adjwt = i.second;
                
                if(weight+adjwt<dist[adjnode])
                {
                    dist[adjnode]=weight+adjwt;
                    pq.push({weight+adjwt,adjnode});
                }
            }
        }
        
        int mini = INT_MIN;
        for(int i=1; i<=n; i++)
        {
            if(i!=k && dist[i]==INT_MAX)
            {
                return -1;
            }
            
            mini = max(mini,dist[i]);
            
        }
                               
        return mini;
        //time complexity here is O(elogv) e-no.of edges and v-no.of vertices as we are traversing each edge through bfs and insertion deletion for each vertex dist takes logv
    }
};