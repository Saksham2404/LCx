// class Solution {
// public:
//     int climbStairs(int n) {
//         if(n<=2){
//             return n;
//         }

//         int a = 1;
//         int b = 2;

//         for(int i=3;i<=n;i++){
//             int cur = a+b;
//             a = b;
//             b = cur;
//         }

//         return b;
//     }
// };
// // sxksham

//--------------------------with DP------------------------------------------
class Solution {
public:
    int climbStairs(int n) {
        if (n == 0 || n == 1)
            return 1;

        vector<int> dp(n + 1);

        dp[0] = 1;
        dp[1] = 1;

        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        return dp[n];
    }
};