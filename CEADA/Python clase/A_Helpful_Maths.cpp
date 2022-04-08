#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    string s;
    char arr[100];
    cin >> s;
    int j = 0;
    for(int i = 0 ; i<s.size();++i){
        if(s[i] !='+'){
            arr[j] = s[i];
            j++;
        }
    }
    sort(arr, arr+j);
    for(int i = 0 ; i<j ; ++i){
        if(i == j -1){
            cout << arr[i] ;

        }else{
            cout << arr[i] << "+";
        }
    }

    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}