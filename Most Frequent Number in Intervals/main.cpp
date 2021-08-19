#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& intervals) {
    map<int, int> cnt;
    for (auto &v: intervals) {
        cnt[v[0]]++;
        cnt[v[1] + 1]--;
    }
    int res = 0, mx = 0, tot = 0;
    for (auto &[k, v]: cnt) {
        tot += v;
        if (tot > mx) {
            mx = tot;
            res = k;
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

