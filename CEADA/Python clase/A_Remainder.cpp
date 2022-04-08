#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
double n, dig,x,y, cont = 0;
string s;
void solve(){
   cin >> dig >> x >> y;
   cin >> s;

   reverse(s.begin(),s.end());
   for(int i = 0 ; i < x; ++i){
       if(s[i] == '1' && i == y){
           continue;
       }else if(s[i] == '0' && i ==y){
           cont++;
       }else if(s[i] == '1'){
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