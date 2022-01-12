#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    set<int> st;
    for (auto x: nums) {
        if (x % 3 == 0 && st.find(x / 3) != st.end()) return true;
        if (x < 0 && st.find(x * 3) != st.end()) return true;
        st.insert(x);
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

