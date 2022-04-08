#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t ;
ll a,l, r, ans;
void solve(){
    cin >> l >> r;
    a = r/2;
    if(l <= a+1){
        ans = (r-1)/2;
    }else{
        ans = r-l;
    }
    cout << ans << "\n";
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