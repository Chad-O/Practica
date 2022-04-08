#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;
string c;

void solve(){
    cin >> n;
    cin >> c;
    for(int i = 0 ; i < c.length();++i){
        if(c[i] == 'U'){
            cout << 'D';
        }else if(c[i] == 'L'){
            cout << 'L';
        }else if(c[i] == 'D'){
            cout << 'U';
        }else if(c[i] == 'R'){
            cout << 'R';
        }
    }
    cout << endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}