#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(string s, string c) {
    int n = s.size();
    vector<int> res(n, INT_MAX);
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == c[0]) {
            pos = i;
        }
        if (pos != -1) {
            res[i] = i - pos;
        }
    }
    pos = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == c[0]) {
            pos = i;
        }
        if (pos != -1) {
            res[i] = min(res[i], pos - i);
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

