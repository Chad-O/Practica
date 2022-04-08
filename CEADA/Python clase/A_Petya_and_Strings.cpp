#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string a,b;
    int n = 0;
    cin >> a >> b;
    for(int i = 0; i < a.size(); ++i){
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
    }
    for(int i = 0; i < a.size(); ++i){
        if(a[i]<b[i]){
            n = -1;
            break;
        }else if(a[i]>b[i]){
            n = 1;
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