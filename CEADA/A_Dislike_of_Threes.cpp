#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;
ll arr[N];

void solve(){
    ll j  = 1;
    for(ll i = 1 ; i <= 2000; ++i){
        if(i%3!=0 && i%10!=3){
            arr[j] = i;
            j++;
        }
    }
    cin >> n;
    int val;
    while(n--){
        cin >> val;
        cout << arr[val]<<"\n";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}