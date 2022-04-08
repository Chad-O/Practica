#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;
string s;

void solve(){
    cin >> n >> s;
    string ans = "";
    int i = 0;
    while (i < n) {
        if (s[i] == 'o') {
            if (i+2 < n && s[i+1] == 'g' && s[i+2] == 'o') {
                ans += "***";
                i += 3;
                while (i < n-1) {
                    if (s[i] == 'g' && s[i+1] == 'o') {
                        i += 2;
                    } else break;
                }
            } else {
                ans += s[i];
                i++;
            }
        } else {
            ans += s[i];
            i++;
        }
    }
    cout << ans << '\n';
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}