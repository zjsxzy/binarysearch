#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

int solve(string s) {
    int n = s.size(), res = 0;
    for (int i = 0; i + 2 < n; i++) {
        if (s[i] == s[i + 1] && s[i + 1] == s[i + 2]) {
            res++;
            i += 2;
        }
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

