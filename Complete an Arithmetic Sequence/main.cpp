#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    int d = (nums[n - 1] - nums[0]) / n;
    int x = nums[0];
    for (int i = 1; i < n; i++) {
        x += d;
        if (nums[i] != x) return x;
    }
    return x;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

