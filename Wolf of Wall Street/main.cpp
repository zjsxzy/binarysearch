#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& prices) {
    int n = prices.size();
    if (n == 0) return 0;
    int mn = prices[0], res = 0;
    for (int i = 1; i < n; i++) {
        res = max(res, prices[i] - mn);
        mn = min(mn, prices[i]);
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

