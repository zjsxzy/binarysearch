#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

string solve(string a, string b) {
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    string res;
    int n = a.size(), m = b.size(), carry = 0;
    for (int i = 0; i < max(n, m); i++) {
        int na = 0, nb = 0;
        if (i < n) na = a[i] - '0';
        if (i < m) nb = b[i] - '0';
        if (na + nb + carry == 0) {
            res += '0';
            carry = 0;
        } else if (na + nb + carry == 1) {
            res += '1';
            carry = 0;
        } else if (na + nb + carry == 2) {
            res += '0';
            carry = 1;
        } else {
            res += '1';
            carry = 1;
        }
    }
    if (carry) res += '1';
    reverse(res.begin(), res.end());
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

