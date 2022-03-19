#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

double customLog(double base, double x) {
    return log(x) / log(base);
}

int solve(int n, int e, int o, int t) {
    double y1 = e / 100.0 + 1;
    double y2 = o / 100.0 + 1;
    double goal = (double)t / n;

    int years = 2 * ceil(customLog(y1 * y2, goal));
    if (n * pow(y1 * y2, years / 2) / y2 >= t) {
        years--;
    }
    return years;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

