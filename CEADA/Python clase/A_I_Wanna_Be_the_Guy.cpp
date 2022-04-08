#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, val, aux = 0, a, b;
    cin >> n;
    aux = n;
    bool prueba = true;
    unordered_map<int,int> mp;
    cin >> a;
    for(int i = 0; i < a; ++i){
        cin >> val;
        mp[val]++;
    }
    cin >> b;
    for(int i = 0; i < b; ++i){
        cin >> val;
        mp[val]++;
    }
    for(int i = 1; i <= n ; ++i){
        if(mp[i] < 1){
            prueba = false;
        }
    }
    
    if(prueba){
        cout << "I become the guy.";
    }else{
        cout << "Oh, my keyboard!";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}