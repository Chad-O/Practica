#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int n;
unordered_map<int,int> dp(2e5);
void solve() {
	cin >> n;
	vi a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
    
	int ans = 0;
	int lst = 0;
	for (int i = 0; i < n; ++i) {
		int val = a[i];
		dp[val] = dp[val-1]+1;
		if (ans < dp[val]) {
			ans = dp[val];
			lst = val;
		}
	}
 
	vi res;
	for (int i = n-1; i >= 0; --i) {
		if (a[i] == lst) {
			res.push_back(i+1);
			--lst;
		}
	}
	cout << ans << '\n';
	for (int i = res.size()-1; i >= 0; --i) {
		cout << res[i] << ' ';
	}
	cout << '\n';
}
 
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	solve();
    return 0;
}