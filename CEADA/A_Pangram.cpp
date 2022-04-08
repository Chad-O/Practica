#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;
string p;
void solve(){
    cin >> n;
    string alph = "abcdefghijklmnopqrstuvwxyz";
    unordered_map<char,int> mp;
    for(int i = 0 ; i < 26; ++i)    {
        mp[alph[i]] = 0;
        
    }
    cin >> p;
    for(int i = 0 ; i < n;++i){
        p[i] = tolower(p[i]);
        mp[p[i]]++;
    }
    
    for(auto& it :mp){
        if(it.second < 1){
            cout << "NO";
            return;
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