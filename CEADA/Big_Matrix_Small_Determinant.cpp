#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

vector<vector<int>> Identity(int num)
{
    vector<vector<int>> mat(num,vi(num));
    for (int row = 0; row < num; row++)
    {
        for (int col = 0; col < num; col++)
        {
            // Checking if row is equal to column
            if (row == col)
                mat[row][col] = 1;
            else
                mat[row][col] = 0;
        }
    }
    return mat;
}
int tam;
void solve(){
    cin >> tam;
    vector<int> val(tam);
    for(int i = 0 ; i < tam; i++)
    {
        cin >> val[i];
    }
    vector<vector<int>> mat = Identity(tam);
    for(int i = 0 ; i < tam;++i)
    {
        for(int j = 0 ; j < tam;++j)
        {
            if(mat[i][j]&1 && val[i] != 0)
            {
               val[i]--;
            }
            else
            {
                
            }
        }
        
    }
    
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}