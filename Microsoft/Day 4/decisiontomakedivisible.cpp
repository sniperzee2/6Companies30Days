class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& d) {
        int g=d[0];
        for(int i=1;i<d.size();i++)g=__gcd(g,d[i]);
        sort(nums.begin(),nums.end());
       for(int i=0;i<nums.size();i++)if(g%nums[i]==0)return i;
        return -1;
    }
};