#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n,val = 0;
    int mini = INT_MAX, maxi=INT_MIN, maxin = 0, minin = 0;
    cin >> n;
    for(int i = 0 ; i < n ; ++i){
        cin >> val;
        if(val > maxi){
            maxi = val;
            maxin = i;
        }if(val <= mini){
            mini = val;
            minin = i;
        }
    }
    
    if(maxin > minin){
        cout << (maxin-1)+(n-minin)-1;
    }else{
        cout << (maxin-1)+(n-minin);
    }   
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}