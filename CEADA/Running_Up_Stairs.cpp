#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll formas[2];

void solve(){
    formas[0] = 1;
    formas[1] = 1;
    ll val;
    cin >> val;
    for(int i = 2 ; i <= val; i++)
    {
        formas[i%2] = formas[(i-1)%2] + formas[(i-2)%2];
    }
    cout << formas[val%2] << endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t; 
    while(t--)
    {
        solve();
    }
    return 0;
}