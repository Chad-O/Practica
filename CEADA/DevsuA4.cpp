#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t,n;
ll arr[N], val;

void solve(){
    cin >> n;
    int cont = 1;
    val = -3;
    unordered_map<ll,int> mp;
    for(int i = 1 ; i <= n; i++){
        mp[val] = i;
        val+=cont;
        cont+=2;
    }
    for(auto& it:mp){
        if(it.second == n){
            cout << it.first<<"\n";
            return;
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}