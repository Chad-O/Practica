#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, val;
    bool prueba = true;
    cin >> n;
    
    while(n--){
        cin >> val;
        if(val ==1){
            prueba = false;
        }else{
            continue;
        }
    }
    if(prueba){
        cout << "EASY";
    }else{
        cout << "HARD";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}