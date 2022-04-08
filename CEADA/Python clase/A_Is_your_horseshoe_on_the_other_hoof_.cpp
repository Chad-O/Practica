#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int val, cont = 0, n = 4;
    unordered_map<int,int> mp;
    while(n--){
        cin >> val;
        mp[val]++;
    }
    for(auto& it:mp){
        if(it.second >=2){
            cont += it.second-1;
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