#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

class CustomSet {
    public:
    set<int> st;

    CustomSet() {
        st.clear();
    }

    void add(int val) {
        st.insert(val);
    }

    bool exists(int val) {
        if (st.find(val) == st.end()) return false;
        return true;
    }

    void remove(int val) {
        st.erase(val);
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

