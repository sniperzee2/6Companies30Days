class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char, int> m;
        int l=0, r=0, cnt=0;
        int n = s.size();
        while(r < n) {
            m[s[r]]++;
            while(m['a'] && m['b'] && m['c']) {
                cnt += n-r;
                m[s[l++]]--;
            }
            r++;
        }
        return cnt;
    }
};