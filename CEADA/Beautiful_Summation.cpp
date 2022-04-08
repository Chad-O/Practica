#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int ipow(int base, int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
            result *= base;
        exp >>= 1;
        if (!exp)
            break;
        base *= base;
    }
    return result;
}

void solve(){
    long long p,q,n ,m,ans = 0;
    cin >> p >> q >> n >> m;
    for(int i = 1; i <= n; i++)
    {
        ans += (pow(p,i)*pow(i,q));
        ans%=m;
    }
    
    cout << ans%m;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}