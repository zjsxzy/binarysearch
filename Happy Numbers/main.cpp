#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int calc(int x) {
    int sum = 0;
    while (x > 0) {
        int d = x % 10;
        sum += d * d;
        x /= 10;
    }
    return sum;
}

bool solve(int n) {
    int x = calc(n);
    if (x == 1) return true;
    set<int> st;
    while (st.find(x) == st.end()) {
        st.insert(x);
        x = calc(x);
        if (x == 1) return true;
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    cout << solve(11) << endl;
    return 0;
}

