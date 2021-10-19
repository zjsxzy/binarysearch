#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

string solve(int n) {
    if (n == 0) return "0";
    string res = "";
    while (n) {
        res += char('0' + (n % 3));
        n /= 3;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

