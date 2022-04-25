#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    int n = nums.size(), pos;
    for (int i = 0; i < n; i++) {
        pos = abs(nums[i]) - 1;
        nums[pos] = -1 * abs(nums[pos]);
    }
    vector<int> res;
    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) res.push_back(i + 1);
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

