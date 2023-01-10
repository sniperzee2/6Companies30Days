class Solution {
public:
    
    int solve(vector<int>&a,vector<int>&b){
        return (a[0]-b[0])*(a[0]-b[0]) + (a[1]-b[1])*(a[1]-b[1]);
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_map<int,int> m;
        
        m[solve(p1,p2)]++;
        m[solve(p1,p3)]++;
        m[solve(p1,p4)]++;
        m[solve(p2,p3)]++;
        m[solve(p2,p4)]++;
        m[solve(p3,p4)]++;
        
        int max = -1;
        
        for(auto &x:m){
            max = max<x.first ? x.first : max;
        }
       
                
        return m.size() == 2 && m[max] == 2;
    }
};