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
int sum, deepest;
void dfs(Tree* root, int dep) {
    if (!root) return;
    if (dep > deepest) {
        sum = root->val;
        deepest = dep;
    } else if (dep == deepest) {
        sum += root->val;
    }
    dfs(root->left, dep + 1);
    dfs(root->right, dep + 1);
}
int solve(Tree* root) {
    sum = 0;
    deepest = 0;
    dfs(root, 0);
    return sum;
}



int main() {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
    solve();
    return 0;
}

