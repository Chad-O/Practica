#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007

void solve(){
    string x,y;
    cin >> x >> y;
    cout << max(abs(x[0] - y[0]), abs(x[1] - y[1])) << "\n";
    while(x!=y){
        if(x[0]<y[0]){
            cout << "R";
            x[0] += 1;
        }else if(x[0]>y[0]){
            cout << "L";
            x[0] -= 1;
        }
        if(x[1]<y[1]){
            cout << "U";
            x[1] += 1;
        }else if(x[1]>y[1]){
            cout << "D";
            x[1] -= 1;
        }
        cout << "\n";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v = 0;
    solve();
    return 0;
}