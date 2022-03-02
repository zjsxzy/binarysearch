#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums, vector<int>& target) {
    sort(nums.begin(), nums.end());
    sort(target.begin(), target.end());
    int n = nums.size(), m = target.size();
    if (n != m) return false;
    for (int i = 0; i < n; i++) {
        if (nums[i] != target[i]) return false;
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

