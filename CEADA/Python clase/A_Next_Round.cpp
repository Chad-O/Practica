#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, indx, val = 0, cont = 0;
    cin >> n >> indx;
    int arr[n];
    for(int i =0; i<n;++i){
        cin >> val;
        arr[i] = val;
    }
    for(int i = 0; i<n;++i){
        if(arr[i] >= arr[indx-1] && arr[i] > 0) {
            cont ++;
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