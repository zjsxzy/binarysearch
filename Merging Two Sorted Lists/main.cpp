#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

vector<int> solve(vector<int>& a, vector<int>& b) {
    vector<int> ans;
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) {
            ans.push_back(a[i]); i++;
        } else {
            ans.push_back(b[j]); j++;
        }
    }
    while (i < n) {
        ans.push_back(a[i]); i++;
    }
    while (j < m) {
        ans.push_back(b[j]); j++;
    }
    return ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

