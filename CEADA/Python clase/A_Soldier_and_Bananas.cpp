#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,k,w, sum = 0;
    cin >> n >> k >> w;
    for(int i = 1; i<=w;++i){
        sum += n*i;
    }
    if(sum < k){
        cout << 0;
    }else{
        cout << sum - k;
    }

}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}