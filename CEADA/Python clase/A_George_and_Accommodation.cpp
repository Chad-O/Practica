#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, cont = 0;
    cin >> n;
    vi v1(n),v2(n);
    for(int i = 0 ;i < n; ++i){
        cin >> v1[i] >> v2[i];
        if(v2[i]-v1[i] >= 2){
            cont++;
        }
    }
    cout << cont;
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}