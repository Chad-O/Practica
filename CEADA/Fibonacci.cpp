#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int fib(int n, unordered_map<int,int> mp)
{
    int val = 0;
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else if(mp.count(n))
    {
        return mp[n];
    }else{
        val = fib(n-1,mp)+ fib(n-2,mp);
        mp[n] = val;
        return val; 
    }
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n; 
    cin >> t;
    while(t--){
        int val;
        cin >> n;
        unordered_map<int,int> mp;
        cout << fib(n,mp)%10 << endl;
    }
    return 0;
}