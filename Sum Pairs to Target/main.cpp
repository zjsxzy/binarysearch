#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, int target) {
    int n = nums.size();
    map<int, int> cnt;
    for (auto &x: nums) {
        cnt[x]++;
    }
    int res = 0;
    for (auto &[x, v]: cnt) {
        int y = target - x;
        int t = min(cnt[y], v);
        res += t;
    }
    return res / 2;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

