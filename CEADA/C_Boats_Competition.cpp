#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, n;

void solve(){
    cin >> n;
    vl v1(n);
    ll maxi = 0;
    unordered_map<int,ll>mp;
    bool check[n+1][N] = {};
    for(int i = 0 ; i < n; ++i){
        cin >> v1[i];
    }
    for(int i = 0 ; i < n-1 ; ++i){
        for(int j = i+1 ; j < n; ++j){
            if(!check[i][v1[i]+v1[j]] && !check[j][v1[i]+v1[j]]){
                mp[v1[i]+v1[j]]++;
                check[i][v1[i]+v1[j]]=true;
                check[j][v1[i]+v1[j]]=true;
                maxi = max(maxi,mp[v1[i]+v1[j]]);
            }
        }
    }
    cout << maxi << endl;
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