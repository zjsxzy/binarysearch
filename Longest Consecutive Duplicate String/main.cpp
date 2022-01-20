#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    int res = 0, n = s.size();
    if (n == 0) return 0;
    char c = s[0];
    int cnt = 1;
    s += "#";
    for (int i = 1; i <= n; i++) {
        if (c == s[i]) {
            cnt++;
        } else {
            res = max(res, cnt);
            cnt = 1;
            c = s[i];
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

