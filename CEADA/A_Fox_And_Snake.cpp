#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int a,b;

void solve(){
    cin >> a >> b;
    for(int i = 1 ; i <= a ; ++i){
        for(int j = 1 ; j <=b;++j){
            bool serpiente = false;
            if(i%2 == 1)serpiente = true;
            else
            {
                if(i%4 == 2) serpiente = (j==b);
                if(i%4 == 0) serpiente = (j==1);
            }
            cout << (serpiente ? "#" : ".");
        }
        cout << endl;
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}