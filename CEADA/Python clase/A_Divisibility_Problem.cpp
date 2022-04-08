#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int a,b;
void solve(){
    int cont = 0, aux = 0,  aux1 =0;
    cin >> a >> b;
    aux = b;
    if(a%b==0){
        cout << 0 << "\n";
        return;
    }else{
        cout << b-a%b << "\n";
        return;
    }
    
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >>n;
    while(n--){
        solve();
    }
    return 0;
}