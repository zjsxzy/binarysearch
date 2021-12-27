#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& a, vector<int>& b) {
    if (a.size() * 6 < b.size() || b.size() * 6 < a.size()) return -1;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int sum_a = 0, sum_b = 0;
    for (auto x: a) {
        sum_a += x;
    }
    for (auto x: b) {
        sum_b += x;
    }

    if (sum_a > sum_b) return solve(b, a);

    reverse(b.begin(), b.end());
    int i = 0, j = 0;
    int res = 0;
    int diff = sum_b - sum_a;
    while (diff > 0) {
        res++;
        if (i < a.size() && j < b.size()) {
            int x = 6 - a[i];
            int y = b[j] - 1;
            // cout << res << " " << x << " " << y << endl;
            if (x > y) {
                diff -= x;
                i++;
            } else {
                diff -= y;
                j++;
            }
        } else {
            if (i < a.size()) {
                diff -= 6 - a[i];
                i++;
            } else {
                diff -= b[j] - 1;
                j++;
            }
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

