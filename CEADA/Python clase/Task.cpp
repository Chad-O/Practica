#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int solve(){
    int a,b,c,maxi=INT_MIN;
    cin >> a >> b >>c;
    int dp[a][b];
    int sum[a][b];
    for(int i = 0 ; i < a; i++){
        for(int j = 0 ; j < b ;++j){
            cin >> dp[i][j];
            sum[i][j] += dp[i][j];
        }
    }
    for(int i = 1 ; i < a;++i){
        for(int j = 0; j < c ; ++j){
            for(int x = 0; x < min(j,b);++x){
                dp[i][j] = max(dp[i][j],sum[i][x]+dp[i-1][j-x]);
                if(dp[i][j] > maxi){
                    maxi = dp[i][j];
                }
            }
        }
    }
    return maxi;    

}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i=1, val=0;
    cin >> n;
    while(n--){
        val = solve();
        cout<<"Case #"<<i<<": "<<val<<"\n";
    }
    return 0;
}