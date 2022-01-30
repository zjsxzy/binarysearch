#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s) {
    s = 'x' + s + 'x';
    int n = s.size();
    for (int i = 1; i < n - 1; i++) {
        if (s[i] != '?') continue;
        if (s[i - 1] != '1' && s[i + 1] != '1') s[i] = '1';
        else if (s[i - 1] != '2' && s[i + 1] != '2') s[i] = '2';
        else s[i] = '3';
    }
    return s.substr(1, n - 2);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

