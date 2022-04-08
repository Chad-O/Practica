#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll t,n;

void solve(){
    cin >> n;
    ll val = 1;  
    if(n==1){
        cout << 0 << "\n";
        return;
    }
    while(val*(val+1) <n){
        val++;
    }
    if(val*val >=n){
        cout << val + val -2 << "\n";
    }else{
        cout << val+val-1<<"\n";
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