#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool solve(vector<vector<int>>& graph) {
    bool flag = true;
    int n = graph.size();
    vector<int> color(n, -1);
    function<void(int, int)> dfs = [&](int u, int c) {
        if (!flag) return;
        if (color[u] > 0) {
            if (color[u] != c) {
                flag = false;
            }
            return;
        }
        color[u] = c;
        for (auto v: graph[u]) {
            dfs(v, 1 - c);
        }
    };
    for (int u = 0; u < n; u++) {
        if (color[u] > 0) continue;
        dfs(u, 0);
    }
    return flag;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

