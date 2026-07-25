#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const int MOD = 1000000007;
    int n;
    cin >> n;

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int sum = 1; sum <= n; ++sum) {
        for (int face = 1; face <= 6 && sum - face >= 0; ++face) {
            dp[sum] = (dp[sum] + dp[sum - face]) % MOD;
        }
    }

    cout << dp[n] << '\n';
    return 0;
}
