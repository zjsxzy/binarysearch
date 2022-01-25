#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(string s, int i, int j) {
    int n = s.size();
    int t = i / n;
    i = i % n;
    j -= t * n;
    string res = s.substr(i, j - i);
    if (j > n) {
        t = (j - n) / n;
        j = (j - n) - t * n;
        while (t--) {
            res += s;
        }
        res += s.substr(0, j);
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

