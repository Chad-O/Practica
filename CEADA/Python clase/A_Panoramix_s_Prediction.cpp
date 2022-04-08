#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    bool prueba;
    int x,y;
    cin >> x >> y;
    vi v1{1,2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i = 1 ; i <= v1.size() ; ++i){
        if(v1[i] == y && v1[i-1] == x){
            cout << "YES";
            return;
        }
    }
    cout << "NO";
    return;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}