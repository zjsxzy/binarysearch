#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;
    int cur = nums[0], res = 1;
    for (int i = 1; i < n; i++) {
        if ((long long)cur * nums[i] < 0) {
            res++;
            cur = nums[i];
        }
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

