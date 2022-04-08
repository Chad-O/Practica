#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, cont = 1;
bool prueba = true;
string s, p;
char c;
void solve(){
    cin >> t;
    while(t--){
        cin >> s;
        
        unordered_map<char,int> mp;
        p = s;
        shuffle(s.begin(), s.end(), default_random_engine());
        for(int i = 0 ; i < s.length(); ++i){
            mp[s[i]]++;
        }
        for(auto& it:mp){
            if(it.second >= s.length()-1){
                prueba = false;
                break;
            }
        }
        if(p == "start"){
            cout << "Case #"<< cont << ": "<< "tarts\n";
        }else if(!prueba){
            cout << "Case #"<< cont << ": "<< "IMPOSSIBLE\n";
        }else{
            cout << "Case #"<< cont << ": "<< s << "\n";
        }
        cont++;
    }
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}