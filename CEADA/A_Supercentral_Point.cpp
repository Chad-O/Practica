#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t;
int x[N], y[N];
void solve(){
    int cont = 0;
    cin >> t;
    
    for(int i = 0 ; i < t; ++i){
        cin >> x[i] >> y[i];
    }

    for(int i = 0; i < t ; ++i){
        bool der = false, izq = false , arr = false, abajo = false;
        for(int j = 0 ; j < t; ++j){
                if(x[j]>x[i] && y[j] == y[i]){
                    der = true;
                }
                if(x[j] < x[i] && y[j] == y[i]){
                    izq = true;
                }
                if(x[j] == x[i] && y[j] > y[i]) {
                    arr = true;
                }
                if(x[j] == x[i] && y[j] < y[i]){
                    abajo = true;
                }
            }
        if(der && izq && arr && abajo){
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