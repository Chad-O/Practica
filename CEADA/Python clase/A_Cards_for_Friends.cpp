#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t;

void solve(){
    int w,h,n, cont = 1;
    cin >> w >> h>> n;
    while(w%2==0){
        w/=2;
        cont*=2;
    }
    while(h%2==0){
        h/=2;
        cont*=2;
    }
    if(cont >= n){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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