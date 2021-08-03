#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return -1;
    int sum = 0, res = -1;
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        if (sum <= k) res = max(res, i);
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

