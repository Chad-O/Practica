#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,k;
    cin >> n >> k;
    string s,aux=" ";
    cin >> s;
    while(k--){
        for(int i = 1; i < n; ++i){
            if(s[i-1] == 'B' && s[i] == 'G'){
                s[i-1] = 'G';
                s[i] = 'B';
                ++i;
            }
        }
    }
    cout << s;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}