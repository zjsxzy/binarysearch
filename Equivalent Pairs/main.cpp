#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    map<int, int> cnt;
    for (auto x: nums) {
        cnt[x]++;
    }
    int res = 0;
    for (auto& [k, v]: cnt) {
        res += v * (v - 1) / 2;
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

