#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int n;
string m;
void solve(){
    cin >> n >> m;
    string r = "0000000000";
    for(int i = 0 ; i < n; ++i)
    {
        if(m[i] == 'L')
        {
            for(int j = 0; j < r.size();++j)
            {
                if(r[j] == '0')
                {
                    r[j] = '1';
                    break;
                }
            }
        }else if(m[i] == 'R')
        {
            for(int j = 9; j >= 0 ; --j)
            {
                if(r[j] == '0')
                {
                    r[j] = '1';
                    break;
                }
            }
        }else
        {
            //Ascii transformation
            int val = (int)m[i] - 48;
            r[val] = '0';
        }
    }
    cout <<endl<< r;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}