class Solution {
private:
    void combinationSum3Util(int k, int n, int val, vector<vector<int> > &ans, vector<int> &values) {
        if ((k == 0) && (n == 0)) {
            ans.push_back(values);
            return;
        }
        if (k <= 0 || n < 0) {
            return;
        }
        for (int i = val; i <= 9; i++) {
            values.push_back(i);
            combinationSum3Util(k - 1, n - i, i + 1, ans, values);
            values.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int> > ans;
        vector<int> values;
        combinationSum3Util(k, n, 1, ans, values);
        return ans;
    }
};