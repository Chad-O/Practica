#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int tam=0, val =0;
    cin >> tam;
    int mini = 0;
    vi v1(tam);
    vi ans;
    for(int i = 0; i< tam; ++i){
        cin >> val;
        v1[i] = val;
        mini = min(v1[i],val);
    }
    for(int i = 0; i < tam; i++){
        for(int j=0;j<tam;j++){
            if(v1[i]+mini >= v1[j]){
                ans[i] = i+1;
            }
        }
    }
    cout << ans.size() << "\n";
    for(int num:ans){
        cout << ans[num] << "\t";
    }
    


}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}