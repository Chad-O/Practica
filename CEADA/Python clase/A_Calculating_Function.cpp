#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    ll n, cont = 0;
    cin >> n;
    if(n & 1){
        cout << -((n+1)/2);
        return;
    }else{
        cout << (n/2);
        return;
    }
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}