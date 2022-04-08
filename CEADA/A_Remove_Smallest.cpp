#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t,n;

void solve(){
    cin >> n;
    vi v1(n);
    for(int i = 0 ; i < n; ++i){
        cin >> v1[i];
    }
    sort(v1.begin(), v1.end());
    for(int i =1 ; i < n ;++i){
        if(v1[i] - v1[i-1] > 1){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    
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