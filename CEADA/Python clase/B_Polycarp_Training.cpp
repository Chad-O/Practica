#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int n, val, cont = 0;
void solve(){
    cin >> n;
    unordered_map<int,int> mp;
    for(int i = 0; i < n ; ++i){
        cin >> val;
        mp[val]++;
    }
    for(int i = 1 ; i <= n; ++i){
        if(mp[i] >= 1){
            mp[i]--;
            cont++;
        }
    }
    cout<<cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}