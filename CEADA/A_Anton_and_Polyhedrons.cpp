#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll n,cont;

void solve(){
    cin >> n;
    string val = " ";
    unordered_map<char,int> mp;
    for(int i = 0 ; i < n ; ++i){
        cin >> val;
        mp[val[0]]++;
    }
    for(auto& it:mp){
        if(it.first == 'I'){
            cont += 20*it.second;
        }else if(it.first == 'D'){
            cont += 12*it.second;
        }else if(it.first == 'O'){
            cont += 8*it.second;
        }else if(it.first == 'C'){
            cont += 6*it.second;
        }else if(it.first == 'T'){
            cont += 4*it.second;
        }
    }
    cout << cont;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}