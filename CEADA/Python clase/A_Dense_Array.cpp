#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n = 0;
    int tam = 0, val = 0;
    cin >> tam;
    vi v1(tam);
    for(int i = 0; i< tam; ++i){
          cin >>  val;
          v1[i] = val;
    }

    for(int num = 1; num < v1.size(); ++num){
        int min_ = min(v1[num],v1[num-1]), max_= max(v1[num],v1[num-1]);
        while(min_*2 < max_){
             min_ = min_*2;
             n++;   
        }
    }
    cout << n << "\n";
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 0, v = 0;
    cin >> t;
    while(t> v){
        solve();
        v++;
    }
    return 0;
}