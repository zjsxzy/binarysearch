#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(int n) {
    if (n % 3 == 0 || n % 7 == 0) return true;
    for (int i = 1; i * 7 <= n; i++) {
        if ((n - (i * 7)) % 3 == 0) return true;
    }
    return false;
}

int main() {
    freopen("in.txt", "r", stdin);
    solve();
    return 0;
}

