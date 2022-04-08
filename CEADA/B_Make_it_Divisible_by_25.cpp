#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);


void solve(){
    ll n;
    cin >> n;
    string val = to_string(n);
    reverse(val.begin(), val.end());
    int cont = 0;
    bool prueba5 = false, prueba27 = false, prueba0 = false, prueba05 = false;

    for(char& c : val)
    {
        if((c == '2' || c == '7') && prueba5)
        {
            prueba27 = true;
        }
        if(c == '5')
        {
            prueba5 = true;
        }
        if((c == '5' || c == '0') && prueba0)
        {
            prueba05 = true;
        }
        if(c == '0')
        {
            prueba0 = true;
        }
        cont++;
        
        if(prueba5 && prueba27 || prueba0 && prueba05)
        {
            cout << cont-2<<endl;
            return;
        }
    }
    
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