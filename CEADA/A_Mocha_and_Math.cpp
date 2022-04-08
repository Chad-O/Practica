#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll n;

void solve(){
    cin >> n;
    ll arr[n];
    
    for(int i = 0; i < n;i++){
        cin >> arr[i];
    }
    ll mini = arr[0];
    for(int i = 1; i < n ;++i){
        mini &= arr[i];
    }
    cout << mini << "\n";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
    