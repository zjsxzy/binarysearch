#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

set<long long> st;
void pre() {
    vector<long long> nums;
    int prod = 1;
    for (int i = 1; i <= 12; i++) {
        prod *= i;
        nums.push_back(prod);
    }
    for (int s = 0; s < (1 << 12); s++) {
        long long sum = 0;
        for (int i = 0; i < 12; i++) {
            if (s & (1 << i)) {
                sum += nums[i];
            }
        }
        st.insert(sum);
    }
}
bool solve(int n) {
    if (st.size() == 0) pre();
    return st.find(n) != st.end();
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

