#include <bits/stdc++.h>

using namespace std;
const int mod = 1e9 + 7;

int main() {
    int t, n, m;
    cin >> t;
    for (int q = 0; q < t; ++q) {
        cin >> n >> m;
        n++;
        m++;
        int dp[n][m];
        for (int i = 0; i < n; ++i) {
            dp[i][0] = 1;
        }
        for (int i = 0; i < m; ++i) {
            dp[0][i] = 1;
        }
        for (int i = 1; i < n; ++i) {
            for (int j = 1; j < m; ++j) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            }        
        }
        cout << dp[n - 1][m - 1] << "\n";
    }
    return 0;
}