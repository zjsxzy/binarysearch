#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(int n) {
    int cnt = 1;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
        cnt++;
    }    
    return cnt;
}

int main() {
    freopen("in.txt", "r", stdin);
    solve();
    return 0;
}

