#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
string str ="a";


void solve(string& s){    
    if(s.size() == 1 && s[0] == '1') cout << 1;
    else if(s.size() == 1) cout << 2 ;
    else
    {
        int cont = 2;
        string s1 = to_string(s.size());
        while(s!=s1)
        {
            s = to_string(s1.size());
            s1 = to_string(s.size());
            cont++;
        }
        cout << cont;
    }
    

    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str; cin >> str;
    while(str!="END"){
        solve(str);
        cout << endl;
        cin >> str;
    }
    return 0;
}