#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int i = 0;
    string s;
    cin >> s;
    while(i < s.size()){
        if(s[i] == '.'){
            cout << 0;
            i++;
        }else if(s[i] == '-' && s[i+1] == '.'){
            cout << 1;
            i+=2;
        }else if(s[i] == '-' && s[i+1] == '-'){
            cout << 2;
            i+=2;
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}