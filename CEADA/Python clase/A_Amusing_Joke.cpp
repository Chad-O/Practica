#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string x,y,z, ans;
    cin >> x >> y >> z;
    ans = x+y;
    sort(ans.begin(),ans.end());
    sort(z.begin(),z.end());
    if(ans == z){
        cout << "YES";
        return;
    }
    cout << "NO";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}