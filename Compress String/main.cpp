#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s) {
    int n = s.size();
    if (n == 0) return s;
    string res = "";
    res += s[0];
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            res += s[i];
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

