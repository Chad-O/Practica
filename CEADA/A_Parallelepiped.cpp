#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int s1,s2,s3;
void solve(){
    cin >> s1 >> s2 >>s3;
    int a = sqrt(s1*s2/s3+0.5);
    int b = sqrt(s1*s3/s2+0.5);
    int c = sqrt(s3*s2/s1+0.5);
    
    cout << 4*(a+b+c);
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}