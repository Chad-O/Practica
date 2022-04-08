#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

ll w,h,a,b,m,c;
void solve(){
    cin >> w >> h >> a >> b >> m >> c;
    ll cont = 0;
    
    
    ll tileF = ceil(w/a);
    ll tileC = ceil(h/b);
    double n = tileF*tileC;
    
    ll Rplus = (tileF*a)-w;
    ll Cplus = (tileC*b)-h;

    ll corte = 0;

    if(Rplus != 0)
    {
        corte += h;
    }

    if(Cplus != 0)
    {
        corte += w;
    }
    cont = (ceil(n/10)*m) + corte*c;
    cout << cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}