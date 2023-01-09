class Solution {
public:
    int maxPoints(vector<vector<int>>& p) {
        
        int n = p.size();
        int max = 0;
        
        for(int i=0;i<n-max-1;i++){
            int i_max = 0;
            float slope;
            unordered_map<float,int> m;
            for(int j=i+1;j<n;j++){
                if(p[i][0]-p[j][0] == 0) slope = 10000001;
                else slope = (float)(p[i][1]-p[j][1])/(float)(p[i][0]-p[j][0]);
                
                m[slope]++;
                i_max = i_max>m[slope] ? i_max:m[slope];
            }
            max = max>i_max ? max:i_max;
        }
        return max+1;
    }
};