class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float>time;
        for(int i=0;i<dist.size();i++){
            time.push_back(float(dist[i])/float(speed[i]));
            
        }
        sort(time.begin(),time.end());
        int timer=0;
        int count=0;
        for(int i=0;i<time.size();i++){
            if(time[i]>timer){
                count++;
                timer++;
            }
            else{
                break;
            }
            
        }
        return count;
    }
};