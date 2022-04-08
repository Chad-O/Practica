#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
ll a,b, aux;
void solve(){
    cin >> a >> b;
    aux = a;
    if (b- a + 1 < 3) {
	 	cout << -1 << endl;
	 	return;
	}
 
	if (a % 2 == 0) {
	 	cout << a << ' ' << a + 1 << ' ' << a + 2 << endl;
	 	return;
	}
 
	if (b - a + 1 > 3){
	 	cout << a + 1 << ' ' << a + 2 << ' ' << a + 3 << endl;
	 	return;
	}
 
	cout << -1 << endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}