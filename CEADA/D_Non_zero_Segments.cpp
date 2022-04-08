#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll n;

void solve(){
    cin >> n;
    ll arr[n];
    ll  cont = 0;
    for(int i = 0 ; i < n ; ++i){
        cin >> arr[i];
    }
    for(int i = 0 ; i < n-1; ++i){
        ll sum = arr[i];
        for(int j = i+1 ; j < n ;++j){
            if(sum + arr[j] != 0){
                sum += arr[j];
            }else{
                cont++;
                break;
            }
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