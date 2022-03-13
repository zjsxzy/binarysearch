#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    int d = 0, n = s.size(), rest = 0;
    for (auto c: s) {
        if (c == 'L') d--;
        else if (c == 'R') d++;
        else rest++;
    }
    if (d < 0) return rest + abs(d);
    else return rest + d;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

