#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,b;
    cin >> n;
    vi v1(n);
    for(int i  = 1 ; i<= n; ++i){
        cin >> b;
        v1[b] = i;
    }
    for(int i = 1 ; i <= n ; ++i){
        cout << v1[i] << " ";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}