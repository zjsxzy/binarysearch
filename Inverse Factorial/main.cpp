#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(int a) {
    long long prod = 1;
    map<int, int> res;
    res[1] = 1;
    for (int i = 2; prod < (1L << 31); i++) {
        prod *= i;
        res[prod] = i;
    }
    if (res.find(a) == res.end()) return -1;
    return res[a];
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

