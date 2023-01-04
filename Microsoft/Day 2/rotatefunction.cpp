class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        int sum = 0,f=0;
        
        for(int i=0;i<n;i++){
            sum+=nums[i];
            f+=nums[i]*i;
        }
        
        int m = f;
        
        for(int i=n-1;i>=0;i--){
            f = f + sum - nums[i]*n;
            m = max(m,f);
        }
        return m;
    }
};