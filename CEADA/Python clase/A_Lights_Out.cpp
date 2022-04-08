#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int cnt[3][3];
void modify(int i, int j , int x){
    cnt[i][j] += x;
    if( j +1 < 3){
        cnt[i][j+1] +=x;
    }
    if(j-1>-1){
        cnt[i][j-1]+=x;
    }
    if(i+1<3){
        cnt[i+1][j] +=x;
    }
    if(i-1>-1){
        cnt[i-1][j] +=x;
    }
}
void solve(){
    for(int i = 0 ; i < 3 ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            int x;
            cin >> x;
            modify(i,j,x);
        }
    }
    for(int i = 0 ; i < 3 ; ++i){
        for(int j = 0 ; j < 3 ; ++j){
            if(cnt[i][j] % 2 ==0){
                cout << "1";
            }else{
                cout << "0";
            }
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