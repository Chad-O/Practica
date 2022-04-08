#include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define umap unordered_map
#define uset unordered_set
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int MOD = 1000000007;
#ifndef ONLINE_JUDGE
#define deb(x) cout << #x << '=' << x << '\n'
#else
#define deb(x)
#endif
 
void dfs(int v, umap<int, vi>& edges, uset<int>& visited, vi& queue) {
    visited.insert(v);
    queue.push_back(v);
    for (auto& u: edges[v]) {
        if (!visited.count(u)) {
            dfs(u, edges, visited, queue);
        }
    }
}
 
ll n, m;
void solve() {
    cin >> n >> m;
    umap<int, vi> edges;
    int s, u;
    for (int i = 0; i < m; ++i) {
        cin >> s >> u;
        edges[s].push_back(u);
        edges[u].push_back(s);
    }
 
    vector<int> queue;
    uset<int> visited;
    int ans = 0;
    for (auto& it: edges) {
        if (!visited.count(it.first)) {
            queue.clear();
            dfs(it.first, edges, visited, queue);
            bool degtwo = true;
            for (auto& v: queue) {
                degtwo &= edges[v].size() == 2;
            }
            if (degtwo) ++ans;
        }
    }
    cout << ans << '\n';
}
 
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}