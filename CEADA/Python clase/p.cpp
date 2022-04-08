#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
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
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << par(11);
    return 0;
}