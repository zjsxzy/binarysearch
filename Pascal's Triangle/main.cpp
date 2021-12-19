#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(int n) {
    vector<vector<int>> res(n + 1);
    for (int i = 0; i <= n; i++) {
        res[i].resize(i + 1);
        res[i][0] = res[i][i] = 1;
        for (int j = 1; j < i; j++) {
            res[i][j] = res[i - 1][j] + res[i - 1][j - 1];
        }
    }
    return res[res.size() - 1];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

