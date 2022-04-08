#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int tam = 0, val = 0, n = 0;
    cin >> tam;
    vi v1(tam);
    unordered_map<int,int> mp;

    for(int i = 0; i< tam; ++i){
        cin >>  val;
        v1[i] = val;
    }

    for(int i = 0; i<tam; ++i){
        mp[v1[i]%3]++;
    }
    
    int prom = tam/3;
    for(auto& it:mp){
        while(it.second != prom){
            if(it.second > prom){
                it.second = it.second-prom;
                n++;           
            }else if(it.second < prom){
                it.second++;
                n++;
            }
        }
    }    
    cout << n << "\n";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}