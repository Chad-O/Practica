#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string x,y;
    cin >> x >> y;    
    for(int i = 0; i < x.size(); ++i){
        if(x[i] == y[i]){
            x[i] = '0';
        }else{
            x[i] = '1';
        }
    }
    cout << x;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}