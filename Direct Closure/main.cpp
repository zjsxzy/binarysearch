#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

vector<vector<int>> solve(vector<vector<int>>& graph) {
    int n = graph.size();
    set<int> st;
    vector<vector<int>> res(n, vector<int>(n));
    function<void(int)> dfs = [&](int u) {
        for (auto& v: graph[u]) {
            if (st.find(v) == st.end()) {
                st.insert(v);
                dfs(v);
            }
        }
    };
    for (int i = 0; i < (int)graph.size(); i++) {
        st.insert(i);
        dfs(i);
        for (auto& j: st) {
            res[i][j] = 1;
            res[j][i] = 1;
        }
        st.clear();
    }
    return res;
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

