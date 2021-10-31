#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<vector<int>>& relations) {
    set<int> f;
    map<int, set<int>> follow;
    for (auto p: relations) {
        int u = p[0], v = p[1];
        follow[u].insert(v);
        if (follow.find(v) != follow.end()) {
            if (follow[v].find(u) != follow[v].end()) {
                f.insert(u);
                f.insert(v);
            }
        }
    }
    vector<int> res;
    for (auto x: f) {
        res.push_back(x);
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

