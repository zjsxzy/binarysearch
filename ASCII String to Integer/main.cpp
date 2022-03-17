#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    int num = 0, res = 0;
    for (auto c: s) {
        if (c >= '0' && c <= '9') {
            num = num * 10 + c - '0';
        } else {
            res += num;
            num = 0;
        }
    }
    res += num;
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

