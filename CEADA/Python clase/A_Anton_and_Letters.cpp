#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string s;
    int cont=0;
    getline(cin,s);
    
    unordered_map<char,int> mp ;
    for(int i = 1; i < s.size()-1;i+=3){        
        mp[s[i]]++;
        
    }
    cout << mp.size();
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}