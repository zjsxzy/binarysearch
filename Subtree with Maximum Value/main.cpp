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
map<Tree*, int> sum;
void dfs(Tree* p) {
    if (p->left != NULL) {
        dfs(p->left);
        sum[p] += sum[p->left];
    }
    if (p->right != NULL) {
        dfs(p->right);
        sum[p] += sum[p->right];
    }
    sum[p] += p->val;
    res = max(res, sum[p]);
}
int solve(Tree* root) {
    res = 0;
    dfs(root);
    return res;
}

int main() {
#ifndef ONLINE_JUDGE
   freopen("in.txt", "r", stdin);
#endif
   int ts = 1;
   // cin >> ts;
   for (int t = 1; t <= ts; t++) {
       solve();
   }
   return 0;
}

