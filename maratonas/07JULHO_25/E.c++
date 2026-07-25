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

    const int INF = 1e9;
    vector<int> dp(x + 1, INF);
    dp[0] = 0;

    for (int sum = 1; sum <= x; ++sum) {
        for (int i = 0; i < n; ++i) {
            if (coins[i] <= sum) {
                dp[sum] = min(dp[sum], dp[sum - coins[i]] + 1);
            }
        }
    }

    if (dp[x] >= INF) {
        cout << -1 << '\n';
    } else {
        cout << dp[x] << '\n';
    }

    return 0;
}
