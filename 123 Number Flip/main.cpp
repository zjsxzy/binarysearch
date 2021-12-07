#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(int n) {
    int b = 1e9;
    for (int i = 0; i < 10; i++) {
        int d = n / b % 10;
        if (d > 0 && d < 3) {
            // cout << b << " " << d << endl;
            int res = (n % b) + (n / b + (3 - d)) * b;
            return res;
        }
        b /= 10;
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

