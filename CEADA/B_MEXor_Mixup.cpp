#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int a,b;

void solve(){
    cin >> a >> b;
    int val;
    if(a%4 == 1){
        val = a-1;
    }else if(a%4 == 2){
        val = 1;
    }else if(a%4 == 3){
        val = a;
    }else{
        val = 0;
    }

    if(val == b){
        cout << a <<endl;
    }else if((val^b)!=a){
        cout << a+1<<endl;
    }else{
        cout << a+2 <<endl;
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}