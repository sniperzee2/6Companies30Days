class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.size();
        vector<int> s(10),g(10);
        int bulls=0;
        
        for(int i=0;i<n;i++){
            if(guess[i] == secret[i]) bulls++;
            else{
                s[secret[i]-'0']++;
                g[guess[i] - '0']++;
            }
        }
        int cows = 0;
        
        for(int i=0;i<10;i++) cows+=min(g[i],s[i]);
        string ans;
        
        ans=to_string(bulls)+"A"+to_string(cows)+"B";
        
        return ans;
        
    }
};