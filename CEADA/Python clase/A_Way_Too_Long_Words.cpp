#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n;
    string val;
    cin >> n;
    while(n--){
        cin >> val;
        if(val.length()>10){
            cout << val[0] << val.length()-2 << val[val.length()-1] << "\n";
        }
        else{
            cout << val << "\n";
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}