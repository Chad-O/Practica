#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, coB, coP;
int val,val1 = 0, val2 = 0;
void solve(){
    cin >> t >> coB >> coP;
    while(t--)
    {
        cin >> val;
        val1 += val;
        cin >> val;
        val2 += val;
    }
    if(val1 % 10 != 0)
    {
        val1 = val1 / 10 +1;
    }else
    {
        val1 = val1 /10;
    }
    if(val2 % 10 != 0)
    {
        val2 = val2 / 10 + 1;
    }
    else
    {
        val2 = val2 /10;
    } 
    cout << (val1*coB)+(val2*coP);
    
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}