#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string s;
    int upp = 0, low = 0;
    cin >> s;
    for(int i = 0 ; i < s.size() ; ++i){
        if(isupper(s[i])){
            upp++;
        }else{
            low++;
        }
    }
    if(upp > low){
        for(int i = 0 ; i < s.size(); ++i){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0 ; i < s.size(); ++i){
            s[i] =  tolower(s[i]);
        }
    }
    cout << s;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}