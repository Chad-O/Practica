#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int nChoosek( int n, int k )
{
    if (k > n) return 0;
    if (k * 2 > n) k = n-k;
    if (k == 0) return 1;

    int result = n;
    for( int i = 2; i <= k; ++i ) {
        result *= (n-i+1);
        result /= i;
    }
    return result;
}

int a,b;
void solve(){
    cin >> a >> b;
    unordered_map<int,int> mp;
    string val;
    for(int i = 0 ; i < a ; ++i)
    {
        cin >> val;
        for(int j = 0 ; j < b ;++j)
        {
            
            if(val[j] == 'y')
            {
                mp[j]++;
            }
            else if(val[j] == 'n')
            {
                mp[j]+= 0;
            }
        }
    }
    int val2 = 3;
    bool proof = true;
    for(auto& it:mp)
    {
        if(it.second == 1)
        {
            a = a-1;
            val2 = val2-1;
        }
        if(it.second == 0)
        {
            a = a-1;
            proof = false;
        }
    }
    if(a < 3 || proof == false)
    {
        cout << 0 << endl;
    }else
    {
        int ans = nChoosek(a,val2);
        cout << ans <<endl;
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