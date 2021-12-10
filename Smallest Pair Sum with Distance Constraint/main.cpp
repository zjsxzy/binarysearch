#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int mn = INT_MAX, res = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (mn < INT_MAX) res = min(res, nums[i] + mn);
        if (i - 1 >= 0) mn = min(mn, nums[i - 1]);
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

