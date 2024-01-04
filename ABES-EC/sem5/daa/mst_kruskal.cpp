#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int parent[N], sz[N];
void Make(int v) {
    parent[v] = v;
    sz[v] = 1;
};
int Find(int v) {
    if (parent[v] == v) {
        return parent[v];
    };
    return parent[v] = Find(parent[v]);
};
void Union(int a, int b) {
    a = Find(a);
    b = Find(b);
    if (a != b) {
        if (sz[a] < sz[b]) {
            swap(a, b);
        }
        parent[b] = a;
        sz[a] += sz[b];
    }
};
int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < m; i++) {
        int u, v, wt;
        cin >> u >> v >> wt;
        edges.push_back({wt, {u, v}});
    }
    cout << "Result:\n";
    sort(edges.begin(), edges.end());
    for (int i = 1; i <= n; i++) Make(i);
    int total_cost = 0;
    for (auto &edge : edges) {
        int wt = edge.first;
        int u = edge.second.first;
        int v = edge.second.second;
        if (Find(u) != Find(v)) {
            Union(u, v);
            total_cost += wt;
            cout << u << "--" << v << endl;
        }
    }
    cout << "Total cost is: " << total_cost << endl;
    return 0;
}

// 6 9
// 5 4 9
// 1 4 1
// 5 1 4
// 4 3 5
// 4 2 3
// 1 2 2
// 3 2 3
// 3 6 8
// 2 6 7
