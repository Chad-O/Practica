#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t,n;

void solve(){
    int cont =1, twice = 0, maxi = INT_MIN;
    cin >> n;
    string s;
    vi arr(n);
    cin >> s;
    for(int i = 1; i <= n; ++i){
        arr[i-1] = cont;
        
        if(s[i] == s[i-1]){
            cont++;
            twice++;
        }
        if(twice ==2){
            if(s[i] !=s[i-2]){
                cont-=2;       
            }
            twice ==0;
        }
        maxi = max(cont,maxi);
    }
    cout<<maxi<<"\n";
    for(int i = 0 ; i < n;++i){
        cout<< arr[i] << " ";
    }
    cout << endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}