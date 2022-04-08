#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, n;

void solve(){
    ll cont = 0, sum1 = 0, sum2 = 0;
    cin >> n;
    vi v1(n), v2(n);
    int mina = INT_MAX, minb = INT_MAX;

    for(int i = 0 ; i < n ; ++i){
        cin >> v1[i];
        mina = min(mina, v1[i]);
    }
    for(int i = 0 ; i <  n ; ++i){
        cin >> v2[i];
        minb = min(minb,v2[i]);
    }
    
    for(int i = 0; i < n;++i){
        if(v1[i] > mina){
            sum1 = v1[i] - mina;
        }
        if(v2[i] > minb){
            sum2 = v2[i] - minb;
        }
        cont += max(sum1,sum2);
        sum1 = 0, sum2 = 0;      
    }
    cout << cont << endl; 
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