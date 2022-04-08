#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int x, cont = 0;
    pair<int,int> pr;
    int arr[5][5];
    for(int i = 0; i < 5; ++i){
        for(int j = 0 ; j < 5 ; ++j){
            cin >> x;
            arr[i][j] = x;
            if(x == 1){
                pr.first = i;
                pr.second = j;
            }
        }
    }
    if(pr.first != 2){
        cont += abs(pr.first - 2);
    }if(pr.second != 2){
        cont += abs(pr.second -2);
    }
    cout << cont;

}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}