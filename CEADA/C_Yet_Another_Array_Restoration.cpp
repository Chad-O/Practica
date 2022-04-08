#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int t, a , x ,y;

void solve(){
    cin >> a >> x >> y;
    int len = a-1;
    int d;
    while(len > 0){
        if((y-x)%len==0){
            d = (y-x)/len;
            break;
        }
        len--;
    }
    int xcopy = x;
    while(a > 0 && x <=y){
        cout << x << ' ';
        x +=d;
        a--;
    }
    xcopy -=d;
    while(a>0 && xcopy >0){
        cout << xcopy << " ";
        xcopy -=d;
        a--;
    }
    y +=d;

    while(a>0){
        cout << y << ' ';
        y +=d;
        a--;
    }
    cout << "\n";


}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}