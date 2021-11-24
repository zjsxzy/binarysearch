#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

/**
 * class LLNode {
 *     public:
 *         int val;
 *         LLNode *next;
 * };
 */
int solve(LLNode* node) {
    vector<int> b;
    while (node != NULL) {
        b.push_back(node->val);
        node = node->next;
    }
    reverse(b.begin(), b.end());
    int n = b.size(), x = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) x += (1 << i);
    }
    return x;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

