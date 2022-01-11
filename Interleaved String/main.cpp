#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s0, string s1) {
    int l = 0, r = 0, n = s0.size(), m = s1.size();
    string res;
    for (; l < n && r < m; l++, r++) {
        res += s0[l];
        res += s1[r];
    }
    if (l < n) {
        for (; l < n; l++) res += s0[l];
    }
    if (r < m) {
        for (; r < m; r++) res += s1[r];
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

