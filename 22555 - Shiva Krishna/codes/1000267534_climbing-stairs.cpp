class Solution {
public:
    int climbStairs(int n) {
        if (n==0 || n==1)
            return 1;

        int p = 1, q = 1, temp = 1;
        for (int i = 2; i <= n; i++) {
            temp = q;
            q = p + q;
            p = temp;
        }
        return q;        
    }
};