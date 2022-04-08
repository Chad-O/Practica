#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int val = 0,n,cont=0;
    cin >> n;
    while(n--){
        unordered_map<int,int> mp;
        for(int i = 0; i<=2;++i){
            cin >> val;
            mp[val]++;
        }
        if(mp[1]>=2){
            cont++;
        }
        mp.clear();
    }
    cout << cont;
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}