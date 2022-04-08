#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, cont = 0;
    string m;
    cin >> n;
    while(n--){
        cin >> m;
        for(int i=0;i<m.size();++i){
            if(m[i] == '+'){
                cont++;
                break;
            }else if(m[i] == '-'){
                cont--;
                break;
            }
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