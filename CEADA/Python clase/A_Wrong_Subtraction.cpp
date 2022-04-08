#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, veces;
    cin >> n >> veces;
    while(veces--){
        if(n%10 == 0){
            n = n/10;
        }else{
            n = n -1;
        }
    }
    cout << n;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}