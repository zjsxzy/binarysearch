#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int find(int x, vector<int>& f) {
    if (f[x] == x) return x;
    return f[x] = find(f[x], f);
}

bool cmp(vector<int>& a, vector<int>& b) {
    return a[2] < b[2];
}

bool solve(vector<vector<int>>& edges, int a, int b) {
    if (a > b) swap(a, b);
    int n = 0, edge_cost;
    for (auto& v: edges) {
        if (v[0] > v[1]) swap(v[0], v[1]);
        if (a == v[0] && b == v[1]) {
            edge_cost = v[2];
        }
        n = max({n, v[0], v[1]});
    }
    n++;

    sort(edges.begin(), edges.end(), cmp);

    vector<int> f(n);
    for (int i = 0; i < n; i++) f[i] = i;
    int mst = 0;
    for (auto v: edges) {
        int x = v[0], y = v[1];
        if (find(x, f) != find(y, f)) {
            f[find(x, f)] = find(y, f);
            mst += v[2];
        }
    }

    for (int i = 0; i < n; i++) f[i] = i;
    int mst2 = edge_cost;
    f[find(a, f)] = find(b, f);
    for (auto& v: edges) {
        int x = v[0], y = v[1];
        if (find(x, f) != find(y, f)) {
            f[find(x, f)] = find(y, f);
            mst2 += v[2];
        }
    }
    return mst == mst2;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

