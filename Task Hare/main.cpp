#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

int solve(vector<int>& tasks, vector<int>& people) {
    sort(tasks.begin(), tasks.end());
    sort(people.begin(), people.end());
    int res = 0, p = 0;
    for (int i = 0; i < tasks.size(); i++) {
        while (p < people.size() && people[p] < tasks[i]) {
            p++;
        }
        if (p < people.size()) {
            p++;
            res++;
        } else break;
    }
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

