#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s, int k) {
    int n = s.size();
    map<string, int> cnt;
    for (int i = 0; i + k <= n; i++) {
        cnt[s.substr(i, k)]++;
    }
    int res = 0;
    for (auto& [k, v]: cnt) {
        if (v > 1) res++;
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

