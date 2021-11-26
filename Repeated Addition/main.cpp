#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(int n) {
    while (n >= 10) {
        int sum = 0;
        int x = n;
        while (x) {
            sum += x % 10;
            x /= 10;
        }
        n = sum;
    }
    return n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

