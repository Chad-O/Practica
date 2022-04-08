#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);


void solve(){
    int m,n,k,temp,val = 0,cont = 0;
    cin >> m >> n >> k;
    vi v1(m);
    for(int i = 0 ; i < m; ++i)
    {
        cin >> val;
        v1[i] = val;
        
    }
    sort(v1.begin(), v1.end());

    for(int i = 0 ; i < m ; i++)
    {
        if(i < k)
        {
            cont += n - v1[i];
        }
        else
        {
            cont += v1[i];
        }
    
    }
    cout << cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        solve();
        cout << endl;
    }
    return 0;
}