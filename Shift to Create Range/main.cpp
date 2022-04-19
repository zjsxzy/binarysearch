#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return true;
    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] - nums[(i + 1) % n] != 1) d1++;
        if (nums[(i + 1) % n] - nums[i] != 1) d2++;
    }
    return d1 == 1 || d2 == 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

