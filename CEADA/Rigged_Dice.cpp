#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int a;
void solve(){
    cin >> a;
    vi ans = {1,2};
    int sum1 = 0, sum2 = 0, val, val2;
    vi al(a),bo(a);
    unordered_map<int, int> mp, mp1;
    for(int i = 0 ; i < a; i++)
    {
        cin >> val;
        sum1+=val;
        cin >> val2;
        sum2+=val2;
        if(sum1 != sum2)
        {
            reverse(ans.begin(),ans.end());
        }
    }

    
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