#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& prices, int k) {
    sort(prices.begin(), prices.end());
    int res = 0;
    for (auto p: prices) {
        if (k >= p) {
            res++;
            k -= p;
        } else {
            break;
        }
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

