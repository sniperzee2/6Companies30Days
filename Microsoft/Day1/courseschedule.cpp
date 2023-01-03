class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& p) {
        unordered_map<int,vector<int>> adj;
        
        for(int i=0;i<p.size();i++){
            int u = p[i][0];
            int v = p[i][1];
            
            adj[u].push_back(v);
        }
        vector<int> in(n);
        for(auto &i:adj){
            for(auto &j:i.second)
                in[j]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++){
            if(in[i] == 0)
                q.push(i);
        }
        
        int count=0;
        
        while(!q.empty()){
            int f = q.front();
            q.pop();

            count++;
            
            for(auto &i:adj[f]){
                in[i]--;
                if(in[i] == 0)
                    q.push(i);
            }
        }
        
        return count==n;
    }
};