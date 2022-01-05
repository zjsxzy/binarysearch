#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<string>& moves, int x, int y) {
    int cx = 0, cy = 0;
    for (auto m: moves) {
        if (m == "NORTH") {
            cy++;
        } else if (m == "EAST") {
            cx++;
        } else if (m == "WEST") {
            cx--;
        } else {
            cy--;
        }
    }
    return (cx == x) && (cy == y);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

