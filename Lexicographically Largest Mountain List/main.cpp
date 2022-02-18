#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(int n, int lower, int upper) {
    vector<int> res;
    if (n > 2 * (upper - lower) + 1) return res;
    int desc_term = min(n - 2, (upper - lower));
    int asc_term = n - desc_term;
    int val = upper - asc_term + 1;
    for (int i = 0; i < asc_term; i++) {
        res.push_back(val);
        val++;
    }
    val = upper - 1;
    for (int i = 0; i < desc_term; i++) {
        res.push_back(val);
        val--;
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

