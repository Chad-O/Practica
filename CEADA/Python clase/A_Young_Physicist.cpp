#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,x = 0,y = 0,z = 0,val,val1,val2;
    cin >> n;
    while(n--){
        cin >> val >> val1 >> val2;
        x+=val;
        y+=val1;
        z+=val2;
    }
    if(x!=0||y!=0||z!=0){
        
        cout << "NO";
        return;
    }
    
    cout << "YES";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}