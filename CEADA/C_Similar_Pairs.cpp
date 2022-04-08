#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, n;

void solve(){
    cin >> n;
    int v[n];
    int a = 0, b = 0;
    for (int &e : v) {
        cin >> e;
        if (e % 2 == 0) {
            a++;
        } else {
            b++;
        }
    }
    if (a % 2 != b % 2) {
        cout << "NO\n";
    } else {
        if (a % 2 == 0) {
            cout << "YES\n";
        } else {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (v[i] % 2 != v[j] % 2 && abs(v[i] - v[j]) == 1) {
                        cout << "YES\n";
                        return;
                    }
                }
            }
            cout << "NO\n";
        }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >>t ;
    while(t--){
        solve();
    }
    return 0;
}