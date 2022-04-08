#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, sum = 0,maxi = INT_MIN;
    cin >> n;
    int ent[n], sal[n];
    for(int i = 0; i < n; ++i){
        cin >> sal[i] >> ent[i];
    }
    for(int i = 0;i < n; ++i){
        sum = sum - sal[i] + ent[i];
        if(sum > maxi){
            maxi = sum;
        }
    }
    cout << maxi;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}