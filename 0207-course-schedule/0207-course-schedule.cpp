class Solution {
public:
    //using kahne algoritham in it as if cycle is present then all courses cant be completeup
    bool toposort(map<int,list<int>>& m,vector<int>& indegree,int numCourses){
        queue<int>q;
        int count=0;
        //in kahne algoritham we get adj list then elements with zero indegree pushed in queue then as its adj elemnts traverse them as their indegree reduced by 1 if any of them indegree become 0 insert it and it continue.... (as topo sort is all about tail should print before head of arrow thus node with indegree 0 obvious should print first as it is at tail only and then next such elemnt comes and procedure continue....)
        for(int i=0;i<numCourses;i++){
            
            if(indegree[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            
            int f=q.front();
            q.pop();
            count++;
            for(auto n:m[f]){
                indegree[n]--;
                if(indegree[n]==0){
                    q.push(n);
                }
            }
            
        }
        //as if all elements or nodes get inserted in queue means their indegree become 0 and valid toposort exists thus no cycle would be present for sure....
        return count==numCourses;
        
        
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        map<int,list<int>>m;
        vector<int>indegree(numCourses,0);
        //making adj list and updating indegree of each node....
        for(int i=0;i<prerequisites.size();i++){
            m[prerequisites[i][1]].push_back(prerequisites[i][0]);
           indegree[prerequisites[i][0]]++;
        }
        
        
        return toposort(m,indegree,numCourses);
    }
};