#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll t, a,b;

void solve(){
    cin >> a >> b;
    double maxi = max(a,b), mini = min(a,b);
    int ans = ceil((maxi-mini)/10); 
    cout << ans  << "\n";
    
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