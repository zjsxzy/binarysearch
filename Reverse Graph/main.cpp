#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<vector<int>> radj(n);
    for (int u = 0; u < n; u++) {
        for (auto v: graph[u]) {
            radj[v].push_back(u);
        }
    }
    return radj;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

