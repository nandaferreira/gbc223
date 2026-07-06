#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	while (true) {
		int N;
		if (!(cin >> N)) return 0;
		if (N == 0) break;
		priority_queue<long long, vector<long long>, greater<long long>> pq;
		for (int i = 0; i < N; ++i) {
			long long x; cin >> x;
			pq.push(x);
		}
		long long cost = 0;
		while (pq.size() > 1) {
			long long a = pq.top(); pq.pop();
			long long b = pq.top(); pq.pop();
			cost += a + b;
			pq.push(a + b);
		}
		cout << cost << '\n';
	}

	return 0;
}

