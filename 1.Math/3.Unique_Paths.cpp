
//! this has rounding error due to the use of double
// class Solution
// {
// public:
//     int uniquePaths(int m, int n)
//     {
//         double total = m + n - 2;
//         int to_choose = min(m - 1, n - 1);
//         double ans = 1;
//         for (int i = 1; i <= to_choose; i++)
//         {
//             ans *= total / i;
//             total--;
//         }
//         return int(ans);
//     }
// };


//! leet code solution
//Time : O(mn)
//Space: O(n)
// class Solution
// {
// public:
//     int uniquePaths(int m, int n)
//     {
//         vector<int> dp(n);
//         for (int i = 0; i < n; i++)
//             dp[i] = 1;
//         for (int j = 1; j < m; j++)
//         {
//             for (int i = 1; i < n; i++)
//             {
//                 dp[i] += dp[i - 1];
//             }
//         }
//         return dp[n - 1];
//     }
// };

//! my solution best solution 
//Time: O(min(m,n)log(m+n))
//Space: O(1)
class Solution {
public:
    int uniquePaths(int m, int n) {
        int total= m +n -2;
        int to_choose= min(m-1,n-1);
        // int ans=1;
        long long numerator=1,denominator=1,g;
        for(int i=1;i<=to_choose;i++)
        {
            numerator*=total;
            denominator*=i;
            g=gcd(numerator,denominator);
            numerator/=g;
            denominator/=g;
            total--;
        }
        return (numerator/denominator);
    }
};