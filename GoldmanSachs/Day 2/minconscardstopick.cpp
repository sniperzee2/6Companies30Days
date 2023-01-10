class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,vector<int>> m;
        int n = cards.size();
        
        for(int i=0;i<n;i++){
            m[cards[i]].push_back(i);
        }
        
        int min = INT_MAX;
        
        for(auto &x:m){
            if(x.second.size()>1){
                for(int i=0;i<x.second.size()-1;i++){
                    min = min<(x.second[i+1]-x.second[i]) ? min : x.second[i+1]-x.second[i]   ;    
                }    
            }
        }
        
        return min == INT_MAX ? -1:min+1;
    }
};