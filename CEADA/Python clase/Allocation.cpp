#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int solve(){
    int a, b,cont=0,sum = 0;
    cin >> a >> b;
    vi v1(a);
    for(int i = 0 ; i < a ; ++i){
        cin >> v1[i];
    }
    sort(v1.begin(),v1.end());
    for(int i = 0 ; i < a ; ++i){
        if(sum+v1[i] <= b){
            cont++;
            sum+=v1[i];
        }
    }
    return cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i=1,val=0;
    cin >> n;
    while(n--){
        val = solve();
        cout << "Case #" << i <<": "<<val << "\n";
        i++;
    }
    return 0;
}