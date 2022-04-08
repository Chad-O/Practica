#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string s;
    cin >> s;
    unordered_map<char,int> mp;
    char b[4] = {'H','Q','9'};
    for(int i = 0 ; i < 4; ++i){
        mp[b[i]]++;
    }
    for(int i = 0 ; i < s.size(); ++i){
        if(mp.count(s[i])){
            cout<<"YES";
            return;
        }
    }
    cout << "NO";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}