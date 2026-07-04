
#include <iostream>
#include <vector>
using namespace std;

class UnionFind {
public:
    UnionFind(int n) : parent(n + 1), size(n + 1, 1), components(n) {
        for (int i = 0; i <= n; ++i) parent[i] = i;
    }

    int find(int x) {
        while (parent[x] != x) {
            parent[x] = parent[parent[x]];
            x = parent[x];
        }
        return x;
    }

    void unite(int a, int b) {
        int ra = find(a);
        int rb = find(b);
        if (ra == rb) return;

        if (size[ra] < size[rb]) swap(ra, rb);
        parent[rb] = ra;
        size[ra] += size[rb];
        --components;
    }

    int countComponents() const {
        return components;
    }

private:
    vector<int> parent;
    vector<int> size;
    int components;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int caseNo = 1;
    while (true) {
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) break;

        UnionFind uf(n);
        for (int i = 0; i < m; ++i) {
            int a, b;
            cin >> a >> b;
            uf.unite(a, b);
        }

        cout << "Case " << caseNo++ << ": " << uf.countComponents() << '\n';
    }

    return 0;
}
