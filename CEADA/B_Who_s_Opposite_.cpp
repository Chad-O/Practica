#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, a, b, c, maxval;

void solve(){
    cin >> a >> b >>c;
    maxval = (max(a,b) - min (a,b))*2;
    if(a > maxval || b > maxval || c > maxval){
        cout << -1<<"\n";
        return;
    }
    if(c + maxval/2 <= maxval){
        cout << c + maxval/2 << "\n";
    }else{
        cout << c - maxval/2 << "\n";
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