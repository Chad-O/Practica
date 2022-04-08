#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int a,b,c;
void solve(){
    cin >> a >> b >> c;
    int maxval = max(max(a,b),c);

    if(a == maxval)
    {
        if(max(b,c) < a)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        } 
    }else{
        cout << maxval-a+1;
    }
    cout << " ";

    if(b == maxval)
    {
        if(max(a,c) < b)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        } 
    }else{
        cout << maxval-b+1;
    }
    cout << " ";
    
    if(c == maxval)
    {
        if(max(b,a) < c)
        {
            cout << 0;
        }
        else
        {
            cout << 1;
        } 
    }else{
        cout << maxval-c+1;
    }
    cout << endl;
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