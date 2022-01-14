#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(string s0, string s1) {
    int n = s0.size(), m = s1.size();
    if (n != m + 1) return false;
    int i = 0, j = 0;
    for (; s0[i] == s1[j] && i < n && j < m; i++, j++);
    if (i == n) return false;
    i++;
    for (; s0[i] == s1[j] && i < n && j < m; i++, j++);
    if (i == n && j == m) return true;
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

