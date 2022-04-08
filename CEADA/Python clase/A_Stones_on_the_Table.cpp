#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, cont = 0;
    cin >> n;
    string s;
    cin >> s;
    char val = s[0];
    for(int i = 1; i<s.size();++i){
        if(s[i] == val){
            cont++;
        }else{
            val = s[i];
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