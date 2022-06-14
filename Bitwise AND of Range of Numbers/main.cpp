#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(int start, int end) {
    int p = -1;
    for (int i = 0; i < 31; i++) {
        if ((start >> i & 1) != (end >> i & 1)) p = i;
    }
    int res = 0;
    for (int i = p + 1; i < 31; i++) {
        if (start >> i & 1) res |= 1 << i;
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

