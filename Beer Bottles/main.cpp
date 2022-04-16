#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(int n) {
    int res = 0;
    while (n >= 3) {
        int d = n / 3;
        res += d * 3;
        n -= d * 3;
        n += d;
    }
    res += n;
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

