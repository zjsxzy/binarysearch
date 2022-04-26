#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& nums) {
    sort(nums.begin(), nums.end(), [&](int a, int b){
        int ta = __builtin_popcount(a), tb = __builtin_popcount(b);
        if (ta != tb) return ta < tb;
        return a < b;
    });
    return nums;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

