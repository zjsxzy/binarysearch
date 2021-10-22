#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums, vector<int>& values) {
    int n = nums.size();
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        a[i] = values[i] + nums[i];
        b[i] = values[i] - nums[i];
    }
    int max_a_i = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[max_a_i]) max_a_i = i;
    }
    int max_b_i = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] > b[max_b_i]) max_b_i = i;
    }
    return a[max_a_i] + b[max_b_i];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

