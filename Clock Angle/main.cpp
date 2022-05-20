#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(int hour, int minutes) {
    hour %= 12;
    double hd = hour * 30 + minutes * 0.5;
    double md = minutes * 6;
    double diff = abs(hd - md);
    if (diff > 180) return 360 - diff;
    return diff;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

