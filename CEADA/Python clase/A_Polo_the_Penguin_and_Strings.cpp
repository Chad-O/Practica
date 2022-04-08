#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int n,k;
void solve(){
    string alph ="cdefghijklmnopqrstuvwxyz";
    cin >> n >> k;
    if(n<k){
        cout << -1;
        return;
    }if(n!=1 && k<=1){
        cout << -1;
        return;
    }if(n == 1){
        cout << "a";
        return;
    }else if(n == 2){
        cout << "ab";
        return;
    }else{
        string ans;
        k -= 2;
        n -= k;
        if(n & 1){
            cout << 'a';
            ans = "ba";
            n--;
        }else{
            ans = "ab";
        }
        while(n > 0){
            cout << ans;
            n -= 2;
        }
        cout << alph.substr(0,k);
    }

}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}