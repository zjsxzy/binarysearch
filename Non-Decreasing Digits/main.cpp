#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

bool non_decreasing(vector<int>& d) {
    int n = d.size();
    for (int i = 1; i < n; i++) {
        if (d[i] < d[i - 1]) return false;
    }
    return true;
}

int to_number(vector<int>& d) {
    int res = 0;
    for (auto x: d) {
        res = res * 10 + x;
    }
    return res;
}

int solve(int n) {
    vector<int> digits;
    int x = n;
    while (x) {
        digits.push_back(x % 10);
        x /= 10;
    }
    reverse(digits.begin(), digits.end());
    if (non_decreasing(digits)) return n;
    int sz = digits.size();
    for (int i = sz - 1; i >= 0; i--) {
        digits[i]--;
        if (non_decreasing(digits)) {
            return to_number(digits);
        }
        digits[i] = 9;
    }
    return to_number(digits);
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

