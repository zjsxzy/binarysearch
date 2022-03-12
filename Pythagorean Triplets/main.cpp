#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    vector<int> sq;
    set<int> st;
    for (auto& x: nums) sq.push_back(x * x), st.insert(x * x);
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int t = sq[i] + sq[j];
            if (st.find(t) != st.end()) return true;
        }
    }
    return false;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

