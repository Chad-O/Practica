#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, conta = 0, contd = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i<n;++i){
        if(s[i]=='A'){
            conta++;
        }else{
            contd++;
        }
    }
    if(conta > contd){
        cout << "Anton";
    }else if(conta < contd){
        cout << "Danik";
    }else{
        cout << "Friendship";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}