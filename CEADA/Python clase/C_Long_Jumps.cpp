#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll t, n;


void solve(){
    ll puntmax = 0, puntact = 0, pos = 0;
    cin >> n;
    ll arr[n];
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
    for(int i = 0 ; i <= n ; ++i){
        puntact = 0;
        for(int j = i ; j < n ; j+=0){
            puntact += arr[j];
            j+=arr[j];
            if(puntact>puntmax){
                puntmax = puntact;
            }
            if(puntact>n){
                break;
            }
        }
    }
    cout << puntmax << '\n';
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