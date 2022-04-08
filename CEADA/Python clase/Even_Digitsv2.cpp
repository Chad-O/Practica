#include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define umap unordered_map
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int MOD = 1000000007;
#ifndef ONLINE_JUDGE
#define deb(x) cout << #x << '=' << x << '\n'
#else
#define deb(x)
#endif
//Si pasa test case 2
ll n;
void solve() {
    cin >> n;
    ll copy = n;
    int numDigits = 0;
    vi digits;
    int val;
    while (copy) {
        val = copy%10;
        digits.push_back(val);
        copy /= 10;
        numDigits++;
    }
    reverse(digits.begin(), digits.end());

    bool change = false;
    vl left;
    vl right;
    for (int i = 0; i < numDigits; ++i) {
        if ((digits[i] % 2 == 0) && !change) {
            left.push_back(digits[i]);
            right.push_back(digits[i]);
            continue;
        }
        if (change) {
            left.push_back(8);
            right.push_back(0);
        } else {
            change = true;
            left.push_back((digits[i]-1)%10);
            if (digits[i]+1 >= 10){
                right.push_back(2);
                right.push_back(0);
            } else {
                right.push_back(digits[i]+1);
            }
        }
    }
    ll leftNum = 0;
    ll rightNum = 0;
    for (auto& num: left) {
        leftNum = leftNum*10 + num;
    }
    for (auto& num: right) {
        rightNum = rightNum*10 + num;
    }
    cout << min(abs(n-leftNum), abs(n-rightNum));
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    int n = 1;
    while (t--) {
        cout << "Case #" << n << ": ";
        solve();
        cout << '\n';
        n++;
    }
    return 0;
}