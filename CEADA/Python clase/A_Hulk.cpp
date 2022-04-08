#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n;
    cin >> n;
    for(int i = 0 ;i < n; ++i){
    	if(i % 2){
			cout << "I love ";
            }
		else{
			cout << "I hate ";
            }
		if(i + 1 == n){
			cout << "it\n";
            }
		else{
			cout << "that ";
            }
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}