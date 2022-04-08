#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll t, a, b , x, y, n;

void solve(){
    cin >> a >> b >> x >> y >> n;

    ll a1 = a - min(a-x, n);
    ll n1 = n - (a-a1);
    ll b1 = b - min(b-y, n1);

    ll b2 = b - min(b-y, n);
    ll n2 = n - (b-b2);
    ll a2 = a - min(a-x, n2);

    cout << min(a1*b1, a2*b2) << '\n';
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}