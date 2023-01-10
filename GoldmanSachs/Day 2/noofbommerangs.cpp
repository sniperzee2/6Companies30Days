class Solution {
public:
    int solve(vector<int>&a,vector<int>&b){
        return (a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]);
    }
    int numberOfBoomerangs(vector<vector<int>>& p) {
        
        int n = p.size();
        int t=0;
        
        if(n < 3) return 0;
        
        for(int i=0;i<n;i++){
            unordered_map<int,int> m;
            for(int j=0;j<n;j++){
                m[solve(p[i],p[j])]++;
            }
            for(auto &x:m){
               if(x.second) t+=((x.second)*(x.second-1));
            }
        }
        
        
        return t;
    }
};