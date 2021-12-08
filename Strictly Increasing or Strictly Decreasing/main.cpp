#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 1) return true;
    int diff = nums[1] - nums[0];
    if (n == 2) {
        if (diff == 0) return false;
        else return true;
    }
    for (int i = 2; i < n; i++) {
        if ((nums[i] - nums[i - 1]) * diff <= 0) return false;
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

