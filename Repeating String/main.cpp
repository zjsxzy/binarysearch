#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s) {
    int n = s.size();
    for (int l = 1; l < n; l++) {
        if (n % l == 0) {
            string t = s.substr(0, l);
            bool flag = true;
            for (int i = l; i < n; i += l) {
                if (t != s.substr(i, l)) {
                    flag = false;
                    break;
                }
            }
            if (flag) return true;
        }
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

