#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    int res = 0, cur = 0;
    for (auto c: s) {
        if (c == '(') cur++;
        else cur--;
        if (cur == -1) {
            res++;
            cur++;
        }
    }
    return res + cur;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

