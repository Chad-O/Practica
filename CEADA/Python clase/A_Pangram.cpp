#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n;
    unordered_map<char,int> mp;
    string s = " ", alph="abcdefghijklmnopqrstuvwxyz";
    cin >> n >> s;
    
    for(int i = 0 ; i < alph.size(); ++i){
        mp[alph[i]] = 0;
    }
    if(n < alph.size()){
        cout << "NO";
        return;
    
    }else{
        for(int i = 0 ; i < n-1 ; ++i){
            mp[tolower(s[i])]++;
        }
        for(auto& it:mp){
            if(it.second==0){
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}