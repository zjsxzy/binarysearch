#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        if (2 * i + 1 < n && nums[i] < nums[2 * i + 1]) return false;
        if (2 * i + 2 < n && nums[i] < nums[2 * i + 2]) return false;
    }
    return true;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

