#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(int n, vector<int>& seats) {
    int m = seats.size(), tot = 0;
    if (m == 0) return 0 >= n;
    if (seats[0] == 0 && seats[1] == 0) {
        tot++;
        seats[0] = 1;
    }
    for (int i = 1; i < m - 1; i++) {
        if (seats[i] == 0 && seats[i - 1] == 0 && seats[i + 1] == 0) {
            seats[i] = 1;
            tot++;
        }
    }
    if (seats[m - 1] == 0 && seats[m - 2] == 0) {
        tot++;
        seats[m - 1] = 1;
    }
    return tot >= n;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

