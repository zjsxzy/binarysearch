#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s, string t) {
    map<char, int> cs, ct;
    for (auto c: s) {
        cs[c]++;
    }
    for (auto c: t) {
        ct[c]++;
    }
    int res = 0;
    for (auto [k, v]: cs) {
        if (v > ct[k]) res += v - ct[k];
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

