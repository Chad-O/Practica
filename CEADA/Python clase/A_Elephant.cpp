#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, cont=0;
    cin >> n;
    while(n!=0){
        if(n-5>=0){
            n=n-5;
            cont++;
        }else if(n-4>=0){
            n=n-4;
            cont++;
        }else if(n-3>=0){
            n=n-3;
            cont++;
        }else if(n-2>=0){
            n=n-2;
            cont++;
        }else if(n-1>=0){
            n=n-1;
            cont++;
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