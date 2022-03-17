#include <bits/stdc++.h>
using namespace std;
#define PB push_back
#define SZ(v) ((int)(v).size())
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int L, R;
void dfs(Tree* p, int d) {
    L = min(L, d);
    R = max(R, d);
    if (p->left) dfs(p->left, d - 1);
    if (p->right) dfs(p->right, d + 1);
}
int solve(Tree* root) {
    L = R = 0;
    dfs(root, 0);
    return R - L + 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

