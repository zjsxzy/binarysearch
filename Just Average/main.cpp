#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums, int k) {
    int n = nums.size(), sum = 0;
    for (auto x: nums) {
        sum += x;
    }
    for (auto x: nums) {
        if (sum - x == k * (n - 1)) return true;
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

