#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& seats) {
    int n = seats.size();
    vector<int> pref(n, n), suff(n, n);
    int curr = -1;
    for (int i = 0; i < n; i++) {
        if (curr >= 0 && seats[i] == 0) {
            pref[i] = i - curr;
        }
        if (seats[i] == 1) curr = i;
    }
    curr = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (curr >= 0 && seats[i] == 0) {
            suff[i] = curr - i;
        }
        if (seats[i] == 1) curr = i;
    }
    int res = 0;
    for (int i = 0; i < n; i++) {
        if (seats[i] == 1) continue;
        res = max(res, min(pref[i], suff[i]));
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

