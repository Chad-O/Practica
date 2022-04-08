#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
ll sum, val, n, secs,mins, horas, dias;
void solve(){
    int veces = 5;
    cin >> n;
    while(n--){
        cin >> val;
        sum += val;
    }
    secs = sum/1000;
    mins = secs/60;
    horas = mins/60;
    dias = horas/ 24; 
    sum -=secs*1000;
    cout << dias << " " << horas%24 << " " << mins%60 << " " << secs%60 << " " << sum;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}