#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    int mn = 0;
    for (int i = 0; i < n; i++) {
        res.push_back(mn);
        if (i == 0) mn = nums[i];
        else mn = min(mn, nums[i]);
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

