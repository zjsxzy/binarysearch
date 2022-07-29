#include <bits/stdc++.h>
using namespace std;
typedef long long LL;

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
int res;
int dfs(Tree* p) {
    if (!p) return 0;
    int left = dfs(p->left);
    int right = dfs(p->right);
    if (p->val % 2 == 0) {
        res = max(res, left + right + 1);
        return max(left, right) + 1;
    }
    return 0;
}
int solve(Tree* root) {
    res = 0;
    dfs(root);
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
   (void)!freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

