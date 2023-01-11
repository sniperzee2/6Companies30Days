typedef pair<int, int> pi;

class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
        
         priority_queue<pi, vector<pi>, greater<pi> > pq;
        
        for(int i=0;i<p.size();i++){
            pq.push({c[i],p[i]});
        }
        
        
        priority_queue<int> pr;
        
        while(k--){
            while(not pq.empty() && pq.top().first<=w){
                pr.push(pq.top().second);
                pq.pop();
            }
            if(pr.empty()) return w;
            w+=pr.top();
            pr.pop();
        }
        
        return w;
    }
};