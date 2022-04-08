#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n, algo;
string s, key;
char c;
void solve(){
    cin >> key;
    getline(cin,s);
    vector<char> vc;
    vc = {'a', 'e', 'i', 'o','u','A','E','I','O','U'};
    unordered_map<char,int> mp;
    for(int i = 0 ; i < vc.size(); ++i){
        mp[vc[i]]++;
    }
    for(int i = 1 ; i < s.size()-2; ++i){
        if(s[i] == key[1]){
            c = s[i+1];
            if(s[i-1] == key[0] && mp.count(c)){
                s.erase(s.begin(), s.begin()+i);
            }
        }
    }
    cout << s << "\n";
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    while(n--){
        solve();
    }
    return 0;
}