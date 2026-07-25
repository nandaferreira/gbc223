#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }

    const long long MOD = 1000000007;
    vector<long long> dp(x + 1, 0);
    dp[0] = 1;

    for (int s = 1; s <= x; ++s) {
        for (int c : coins) {
            if (c <= s) {
                dp[s] = (dp[s] + dp[s - c]) % MOD;
            }
        }
    }

    cout << dp[x] << '\n';
    return 0;
}
