#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(int n) {
    vector<bool> vis(n + 1);
    vector<int> res;
    for (int i = 2; i <= n; i++) {
        if (!vis[i]) {
            res.push_back(i);
            for (int j = i * 2; j <= n; j += i) {
                vis[j] = true;
            }
        }
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

