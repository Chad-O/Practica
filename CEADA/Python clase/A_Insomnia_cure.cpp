#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int a,b,c,d,e, cont = 0;
    cin >> a >> b >> c >> d >> e;
    vi v1(e,0);
    if(a==1||b==1||c==1||d==1){
        cout << e;
        return;
    }else{
        for(int i  = 0; i < v1.size(); ++i){
            if((i+1)%a==0||(i+1)%b==0||(i+1)%c==0||(i+1)%d==0){
                cont++;
        }
    }
    cout << cont;
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}