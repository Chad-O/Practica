#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string s,s1;
    bool prueba = true;
    int j = 0;
    cin >> s >> s1;
    for(int i = s1.size()-1; i >=0 ; --i){
        if(s[j] != s1[i]){
            prueba = false;
            break;
        }
        j++;
    }
    if(!prueba){
        cout << "NO";
    }else{
        cout << "YES";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}