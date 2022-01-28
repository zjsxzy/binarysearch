#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int prefix = 0, res = INT_MAX;
    for (auto& x: nums) {
        prefix += x;
        res = min(res, prefix);
    }
    if (res > 0) return 1;
    return abs(res) + 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

