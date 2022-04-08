#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll t, n, m;

void solve(){
    int val, val1, val2, val3;
    bool prueba =false;
    cin >> n >> m;
    while(n!=0){
        cin >> val >> val1;
        cin >> val2 >> val3;
        if(val2 == val1){
            prueba = true;
        }
        n--;
    }
    if(m&1 || !prueba){
        cout << "NO\n";
        
    }else{
        cout << "YES\n";
    }
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