#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll n;

void solve(){
    ll count = 0;
    cin >> n;
    while(n!=0){
        if(n>=100){
            n-=100;
            count++;
        }else if(n>=20){
            n-=20;
            count++;
        }else if(n>=10){
            n-=10;
            count++;
        }else if(n>=5){
            n-=5;
            count++;
        }else{
            n-=1;
            count++;
        }
    }
    cout << count;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}