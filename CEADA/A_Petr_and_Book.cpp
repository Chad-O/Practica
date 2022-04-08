#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t;
void solve(){
    int cont = 0;
    cin >> t;
    int dias[7];
    for(int i = 0 ; i < 7 ;++i){
        cin >> dias[i];
    }
    while(t>0){
        if(cont > 6){
            cont = 0;
        }
        t -= dias[cont];
        cont++;  
    }
    cout << cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
} 