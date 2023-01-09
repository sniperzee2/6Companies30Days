class Solution {
public:
    int trailingZeroes(int n) {
        int c =0;
        int p = 5;
        while(n/p != 0){
            c+=(n/p);
            p=p*5;
        }
        
        return c;
    }
};