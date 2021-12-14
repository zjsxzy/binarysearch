#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> prefix_max(n), suffix_min(n);
    for (int i = 0; i < n; i++) {
        if (i == 0) prefix_max[i] = nums[i];
        else prefix_max[i] = max(prefix_max[i - 1], nums[i]);
    }
    for (int i = n - 1; i >= 0; i--) {
        if (i == n - 1) suffix_min[i] = nums[i];
        else suffix_min[i] = min(suffix_min[i + 1], nums[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        // cout << i << " " << prefix_max[i] << " " << suffix_min[i] << endl;
        if (prefix_max[i] < suffix_min[i + 1]) return true;
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

