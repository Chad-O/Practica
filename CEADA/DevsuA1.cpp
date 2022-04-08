#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
string s;


void solve(){
getline(cin,s);
for(int i = 0 ; i < s.length(); ++i){
    if(s[i] == 'A'|| s[i] == 'a' || s[i] == 'E' ||s[i] == 'e' ||s[i] == 'I'||s[i] == 'i' ||s[i] == 'O' ||s[i] == 'o' ||s[i] == 'U' ||s[i] == 'u'){
        cout << "dcj" <<s[i];
    }else{
        cout <<s[i];
    }
}

   
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}