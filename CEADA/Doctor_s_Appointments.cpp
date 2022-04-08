// time-limit: 6000
// problem-url: https://csacademy.com/ieeextreme15/task/appointment/
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

vector<int> horario(unordered_map<int,pair<int,int>> mp, int n)
{
	vector<int> hor(n);
	for(int i = 1 ; i <= n ; ++i)
	{
		mp[i] = 
	}
}

int n, val,val2;
void solve() {
	cin >> n;
	unordered_map<int, pair<int,int>> mp;
	for(int i = 1 ; i <= n ; ++i)
	{
		cin >> val >> val2;
		mp[i] = {val,val2};
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin >> t;
	while (t--) solve();
    return 0;
}