#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int a, b;

void solve(){
    cin >> a >> b;
    int tiempoMax = 240, cont = 0, val = 1;
    while(tiempoMax >= b && val<=a){
        tiempoMax -= val*5;
        if(tiempoMax >= b){
            cont++;
        }
        val++;
    }
    cout << cont;
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}