#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int S, N;
    cin >> S >> N;

    vector<long long> dp(S + 1, 0);

    for (int i = 0; i < N; ++i) {
        int size, value;
        cin >> size >> value;

        for (int cap = S; cap >= size; --cap) {
            dp[cap] = max(dp[cap], dp[cap - size] + value);
        }
    }

    cout << dp[S] << '\n';
    return 0;
}
