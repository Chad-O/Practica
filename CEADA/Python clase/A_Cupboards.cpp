#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, ans = 0,val = 0, val1 = 0 ;
    cin >> n;
    unordered_map<int,int> izq, der;
    for(int i = 0 ; i < n ; ++i){
        cin >> val >> val1;
        izq[val]++;
        der[val1]++;
    }
    ans = min(der[1],der[0]) + min(izq[1],izq[0]);
    cout << ans;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}