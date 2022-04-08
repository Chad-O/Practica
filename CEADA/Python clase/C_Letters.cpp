#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int x,y,num = 0, cont=0;
    cin >> x >> y;
    vi v1(x),v2(y);
    for(int i = 0; i<x;++i){
        cin >> v1[i];
    }
    for(int j = 0 ; j < y;++j){
        cin >> v2[j];
    }
    int i = 0;
    for(int j = 0;j<y;++j){
        cont += v1[i];
        num = v2[j];
        if(num<cont){
            cout << i+1 << " "<< num<< "\n";
        }else if(num>cont){
            i += 1;
            cout << i+1 << " " <<num-cont<<"\n";
            
        }
        
    }

}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}