#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    vector<int> a = nums, b = nums;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int s1 = 0, s2 = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        s1 += abs(a[i] - nums[i]);
        s2 += abs(b[i] - nums[i]);
    }
    return min(s1, s2);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

