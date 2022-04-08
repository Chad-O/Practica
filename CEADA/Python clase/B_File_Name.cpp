#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, ans = 0, c = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0;i < n;++i){
        if(s[i]=='x'){
            c ++;
            
        }else{
            c = 0;
        }
        if(c >= 3){
            ans++;
        }    
    }
    cout << ans;
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}