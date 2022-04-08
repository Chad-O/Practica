#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,x,y,z,j; 
    cin >> n;
    while(true){
        n++;
        x = n/1000;
        y = n/100 %10;
        z = n/10%10;
        j = n%10;
        if(x!=y && x!=z && x!=j && y!=z && y!=j && z!=j){
            break;
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