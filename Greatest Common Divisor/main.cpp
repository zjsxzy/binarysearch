#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int gcd(int a, int b) {
    return !b ? a : gcd(b, a % b);
}

int solve(vector<int>& nums) {
    int n = nums.size();
    int res = nums[0];
    for (int i = 1; i < n; i++) {
        res = gcd(res, nums[i]);
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

