#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, arr[N];

void solve(){
    int n, val;
    cin >> n;
    unordered_map<int,int> mp;
    for(int i = 0 ; i < n; ++i){
        cin >> val;
        mp[val]++;
    }
    if(mp[1] > 0 && mp[1]%2==0){
        cout << "YES\n";
        return;
    }else if(!(mp[2]&1) && mp[1] % 2==0){
        cout << "YES\n";
        return;
    }
    cout << "NO\n";
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