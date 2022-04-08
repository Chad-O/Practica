#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, val, cont = 0 , aux = 0;
    cin >> n;
    while(n--){
        cin >> val;
        if(aux != val){
            aux = val;
            cont++;
        }
    }
    cout << cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}