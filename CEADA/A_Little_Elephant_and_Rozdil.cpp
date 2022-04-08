#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll n;
void solve(){
    ll mini = INT_MAX, indx = -1, val;
    bool prueba = true;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n ; ++i){
        cin >> val;
        arr[i] = val;
        if(val == mini){
            prueba = false;
        }else if (val<mini){
            mini = min(mini, val);
            indx = i;
            prueba = true;
        }
    }
    if(!prueba){
        cout << "Still Rozdil";
    }else{
        cout << indx+1;
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}