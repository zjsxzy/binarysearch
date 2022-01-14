#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(int n) {
    int x = n, digits = 0;
    while (x) {
        digits++;
        x /= 10;
    }
    x = n;
    long long sum = 0;
    while (x) {
        int t = 1;
        for (int i = 0; i < digits; i++) {
            t *= x % 10;
        }
        sum += t;
        x /= 10;
    }
    return sum == n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

