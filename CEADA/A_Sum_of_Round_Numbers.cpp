#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, n;
int a[N];
void solve(){
    int d= 0, rem = 0;
    cin >> n;
    if(n >= 1000){
        rem = n%1000;
        a[d++] = n-rem;
        n%=1000;
    }
    if(n>=100){
        rem = n%100;
        a[d++] = n - rem;
        n %= 100;
    }
    if(n>=10){
        rem = n%10;
        a[d++] = n - rem;
        n%=10;
    }
    if(n<10 && n>0){
        a[d++]=n;
    }
    vi v1;
    for(int i = 0 ; i < d;++i){
        v1.push_back(a[i]);
    }
    cout << v1.size() << endl;
    for(int i = 0 ; i < v1.size();++i){
        cout << v1[i] << " ";
    }
    cout << endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--)solve();
    return 0;
}