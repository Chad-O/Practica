#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    ll n, cont = 0;
    cin >> n;
    while(n!=0){
        if(n%10 == 4 || n%10 == 7){
            cont++;
        }
        n = n/10;
    }
    if(cont == 4 || cont == 7){
        cout << "YES";  
        
    }else{
        cout << "NO";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}