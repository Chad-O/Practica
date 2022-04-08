#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int amigos, arr[N], val;
void solve(){
    int sum = 0, cont = 0, aux = 0;
    cin >> amigos;
    for(int i = 0 ; i < amigos;++i){
        cin >> val;
        sum += val;
        
    }
    
    for(int i = 1; i <= 5 ; ++i){
        sum += i;
        if(sum%(amigos+1) != 1){
            cont++;
        }
        sum -= i;
    }
    cout << cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}