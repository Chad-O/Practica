#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n;
    string s, ans;
    cin >> n >> s;
    map<string, int>mp;
    int maxi = INT_MIN;
    for(int i= 0;i<n-1;i++){
        string x;
        x += s[i];
        x +=  s[i+1];
        mp[x]++;
        if(mp[x] > maxi){
            ans = x;
            maxi = mp[x];
        }
    }
    cout << ans;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}