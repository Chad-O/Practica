#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, aux = 0;
    cin >> n;
    int arr[n];
    int ans[n];
    if(n&1){
        cout << -1;
        return;
    }
    for(int i = 0 ; i < n ; ++i){
        arr[i] = i+1;
        
    }
    for(int i = 1 ; i < n ; ++i){
        aux = arr[i-1];
        arr[i-1] = arr[i];
        arr[i] = aux;
        ++i;
    }
    for(int i = 0 ; i < n ; ++i){
        cout<<arr[i] << " ";
    }
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}