#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int a,b, cont = 0;
    cin >> a >> b;
    while(a<b || a==b){
        if(a<b){
            a=a*3;
            b= b*2;
            cont++;
        }else if(a==b){
            a=a*3;
            b= b*2;
            cont++;
        }
    }
    cout << cont;
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}