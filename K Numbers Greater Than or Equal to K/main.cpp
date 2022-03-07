#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int x = n; x > 0; x--) {
        auto m = lower_bound(nums.begin(), nums.end(), x) - nums.begin();
        if (x == n - m) return x;
    }
    return -1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

