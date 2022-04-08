#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int n;

int der(string str, int i){
    cout << str;
    bool prueba = false;
    int cont = 0;
    
    while(i<=str.length())
    {
        if(str[i] == 1)
        {
            return 0;
        }
        i++;
        cont++;
    }
    
    return cont;
}
int izq(string str, int i){
    cout << str;
    bool prueba = false;
    int cont = 0;
    while(i>=0)
    {
        if(str[i] == 1)
        {
            return  0;
        }
        i++;
        cont++;
    }
    return cont;
}

int solve(){
    int val, sum = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0 ; i < n; ++i)
    {
        if(str[i] == '0')
        {
            sum += max(der(str,i), izq(str,i));       
        }
    }
    return sum;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;  cin >> t;
    int i = 1, val ;
    while(t--){
        val = solve();
        cout << "Case #"<<i << ": " << val<<"\n";
        i++;
    }
    return 0;
}