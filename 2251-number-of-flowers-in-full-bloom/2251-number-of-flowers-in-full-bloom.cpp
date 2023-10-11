class Solution {
public:
    vector<int> fullBloomFlowers(vector<vector<int>>& flowers, vector<int>& people) {
        vector<int> start(flowers.size());
        vector<int> end(flowers.size());
        vector<int> v;
        //here logic is simple as sorting start and endtime array both... then as index diff between upper and lower bound both will flowers blooming at that time....
        

        for(int i=0; i<flowers.size(); i++)
        {
            start.push_back(flowers[i][0]);
            end.push_back(flowers[i][1]);
        }
        sort(start.begin(), start.end());
        sort(end.begin(), end.end());
        for(int i=0; i<people.size(); i++)
        {
            int x = upper_bound(start.begin(), start.end(), people[i]) - start.begin();
            int y = lower_bound(end.begin(), end.end(), people[i]) - end.begin();

            v.push_back(x-y);
        }
        return v;
    }
};