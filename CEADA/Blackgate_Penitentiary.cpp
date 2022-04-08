#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;

void solve() {
    cin >> n;
    map<int, set<string>> mp;
    int x;
    string s;
    for (int i = 0; i < n; ++i) {
        cin >> s >> x;
        mp[x].insert(s);
    }

    int start = 1;
    for (auto it: mp) {
        for (string name: it.second) {
            cout << name <<  ' ';
        }
        int end = start+it.second.size()-1;
        cout << start << ' ' << end << '\n';;
        start = ++end;
    }
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}