#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s, string t) {
    int n = s.size(), m = t.size();
    int res = n;
    for (int i = 0; i + m <= n; i++) {
        int diff = 0;
        for (int j = 0; j < m; j++) {
            diff += (t[j] != s[i + j]);
        }
        res = min(res, diff);
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

