#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(string s) {
    int n = s.size();
    long long res = 0, cnt;
    for (int i = 0; i < n; ) {
        int j = i + 1;
        while (s[i] == s[j] && j < n) {
            j++;
        }
        cnt = j - i;
        // cout << i << " " << j << endl;
        res += (cnt + 1) * cnt / 2;
        i = j;
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

