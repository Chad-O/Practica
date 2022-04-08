#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);


void solve(){
    int n;
    string s;
    char c;
    cin >> n;
    getline(cin, s);
    unordered_map<char,int> mp;
    vector<char> vc;
    vc = {',', '.', ' ','!', '?'};
    for(int i = 0 ; i < vc.size();++i){
        mp[vc[i]]++;
    }
    for(int i = 1 ; i < s.length();++i){
        if((i) % 3 == 0 && !mp.count(s[i])){
            if(isupper(s[i])){
                c = s[i];
                c = tolower(c);
                cout << c;
            }else{
                c = s[i];
                c = toupper(c);
                cout << c;
            }
        }else{
            cout << s[i];
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}