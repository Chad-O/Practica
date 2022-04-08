#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int g1, p1, b1, g2, p2, b2;
void solve(){
    cin >> g1 >> p1 >> b1 >> g2 >> p2 >> b2;
    int cont = 0, cont1 = 0;
    cont = g1+p1+b1;
    cont1 = g2+p2+b2;
    if(cont>cont1)
    {
        cout << 1;
        return;
    }
    cout << 2;    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}