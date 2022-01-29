#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<vector<int>>& reviews, int threshold) {
    int x = 0, y = 0;
    for (auto& r: reviews) {
        x += r[0];
        y += r[1];
    }
    int res = threshold * y - 100 * x;
    if (res <= 0) return 0;
    if (res % (100 - threshold) == 0) return res / (100 - threshold);
    return res / (100 - threshold) + 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

