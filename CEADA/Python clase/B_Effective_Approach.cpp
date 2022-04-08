#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5 + 3);
ll n,val,v1[N];

void solve(){
    ll veces, cont = 0, cont1 = 0;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        cin >> val;
        v1[val] = i+1;
    }
    cin >> veces;
    for(int i = 0 ; i < veces; ++i){
        cin >> val;
        cont += v1[val];
        cont1 += n-v1[val]+1;
    } 
    cout << cont << " " << cont1;
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}