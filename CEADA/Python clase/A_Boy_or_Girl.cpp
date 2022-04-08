#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    unordered_map<char,int> mp;
    string s;
    int n = 0;
    cin >> s;
    for(int i = 0 ; i< s.size();++i){
        if(!mp.count(s[i])){
            mp[s[i]]++;
            n++;
        }
    
    }
    if(n%2 == 0){
        cout << "CHAT WITH HER!";
    }else{
        cout << "IGNORE HIM!";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}