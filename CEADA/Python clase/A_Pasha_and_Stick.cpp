#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    ll n,cont = 0;
    cin >> n;
    if(n & 1){
        cout << 0 <<"\n";;
        return;
    }
    if(n <=5){
        cout << 0 <<"\n";
        return;
    }
    if(n%4==0){
        cout<<n/4 - 1<<"\n";;
    }else{
        cout<<(n/4)<<"\n";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}