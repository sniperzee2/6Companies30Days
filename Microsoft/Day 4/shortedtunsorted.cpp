class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int start=0,end=-1;
        int max = nums[0];
        
        for(int i=1;i<n;i++){
            if(max>nums[i]){
                end = i;
            }    
            else{
                max = nums[i];
            }
        }
        
        int min = nums[n-1];
        
        for(int i=n-2;i>=0;i--){
            if(min<nums[i]){
                start = i;
            }else{
                min = nums[i];
            }
        }   
        return end-start+1;
    }
};