#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, k, ans = 0, cont = 0;
    cin >> n >> k;
    vi v1(n);
    int val = 0;
    for(int i = 0; i<n;++i){
        cin >> val;
        v1[i] = val;
    }
    sort(v1.begin(), v1.end());
    
    if(k>0){
        ans = v1[k-1];
        if(v1[k] == ans){
            cout << -1 << "\n";
        }else{
            cout << ans << "\n";
        } 
    }else{
        if(v1[0] <= 1){
            cout << -1 << "\n";
        }else{
            cout << 1 << "\n";
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}