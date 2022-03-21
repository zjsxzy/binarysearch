#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s) {
    int p = s.find('R'), n = s.size();
    int i = p;
    while (s[i] != 'B' && i >= 0) {
        i--;
    }
    if (i == -1) return true;
    i = p;
    while (s[i] != 'B' && i < n) {
        i++;
    }
    if (i == n) return true;
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

