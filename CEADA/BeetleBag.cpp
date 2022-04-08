#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int max (int a, int b)
{
    return(a>b)? a:b;
}

int knapSack(int W, int wt[], int val[], int n)
{
    int i , w;
    vector<vector<int>>  K(n+1, vector<int>(W+1));
    
    for(int i = 0 ; i <= n; ++i)
    {
        for( w= 0; w<= W; w++)
        {
            if(i == 0 || w == 0) K[i][w] = 0;
            else if(wt[i-1] <= w)
            {
                K[i][w] = max(val[i - 1] + K[i-1][w-wt[i-1]], K[i - 1][w]);
            }else
            {
                K[i][w] = K[i-1][w];
            }
        }
    }
    return K[n][W];
}

void solve(){
    int a,b;
    cin >> a >> b;
    int c[b], d[b];
    for(int i = 0 ; i < b; i++)
    {
        cin >> c[i] >> d[i];
    }
    int ans = knapSack(a,c,d,b);
    cout << ans<<endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}