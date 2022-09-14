#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool palindrome(string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) return false;
    }
    return true;
}

bool solve(string a, string b) {
    int n = a.size(), i = 0;
    if (palindrome(a)) return true;
    for (i = 0; i < n / 2; i++) {
        if (a[i] != b[n - i - 1]) break;
    }
    string t = b.substr(i, n - 2 * i);
    if (palindrome(t)) return true;
    return false;
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

