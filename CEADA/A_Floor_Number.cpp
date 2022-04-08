#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, n,x;

void solve(){
    cin >> n >> x;
    int cont = 1, deps=2;
    while(deps < n ){
        deps+=x;
        cont++;
    }
    cout <<cont<<"\n";
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