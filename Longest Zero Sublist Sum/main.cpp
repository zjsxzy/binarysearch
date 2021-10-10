#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> sum(n + 1);
    for (int i = 1; i <= n; i++) {
        sum[i] = sum[i - 1] + nums[i - 1];
    }
    map<int, int> prev;
    prev[0] = 0;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (prev.find(sum[i]) == prev.end()) {
            prev[sum[i]] = i;
        } else {
            res = max(res, i - prev[sum[i]]);
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

