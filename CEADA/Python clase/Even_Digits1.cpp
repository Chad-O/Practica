#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
//No pasa test 2 Kickstart2018A ejA
bool par(ll val){
    bool prueba;
    while(val!=0){
        if((val%10)%2==0){
            val/=10;
            prueba = true;
        }else{
            return false;
        }
    }
    return prueba;
}
int izq(ll val){
    int n = 0;
    while(!par(val)){
        val--;
        n++;
    }
    return n;
}
int der(ll val){
    int n = 0;
    while(!par(val)){
        val++; 
        n++;
    }
    return n;
}
int solve(){
    ll val,n=0,ans= 0;
    cin >> val;
    int aux = val;
    ans = min(der(val),izq(val));
    return ans;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,ans = 0;
    cin >> n;
    for(int i = 0 ; i < n; ++i){
        ans = solve();
        cout << "Case #" << i+1 <<": " << ans << "\n";
    }    
    return 0;
}