#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

class MinimumStack {
    public:
    vector<int> st;
    multiset<int> value;
    MinimumStack() {
        st.clear();
        value.clear();
    }

    void append(int val) {
        value.insert(val);
        st.push_back(val);
    }

    int peek() {
        int x = st.back();
        return x;
    }

    int min() {
        return *(value.begin());
    }

    int pop() {
        int x = st.back(); 
        st.pop_back();
        value.erase(x);
        return x;
    }
};

void solve() {
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

