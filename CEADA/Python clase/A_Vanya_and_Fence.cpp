#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,k, cont = 0;
    cin >> n >> k;
    vi v1(n);
    for(int i = 0 ; i < n;++i){
        cin >> v1[i];
    }
    for(int i = 0; i < n ; ++i){
        if(v1[i] > k){
            cont +=2;
        }else{
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