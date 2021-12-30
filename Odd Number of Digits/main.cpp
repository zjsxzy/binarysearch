#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int digits(int x) {
    int res = 0;
    while (x) {
        res++;
        x /= 10;
    }
    return res;
}

int solve(vector<int>& nums) {
    int res = 0;
    for (auto x: nums) {
        if (digits(x) & 1) res++;
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

