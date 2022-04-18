#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, int k, int target) {
    int sum = 0;
    for (auto x: nums) sum += x;
    int d = abs(target - sum);
    if (d % k == 0) return d / k;
    else return d / k + 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

