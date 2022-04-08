#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;

void solve(){
    ll val, cont = 0;
    cin >> val;
    
    if(val < 2020) cout << "NO\n";
    while(val%2020 != 0 && val >= 2020){
        val--;
        cont++;
    }
    if(val % 2020 == 0){
        if(val/2020 >= cont){
            cout << "YES\n";
        }else{
            cout << "NO\n";
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}