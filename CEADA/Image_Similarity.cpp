#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);

int a,b;
void rotate(vector<vector<char>>& matrix) {
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j <= i; ++j) {
            swap(matrix[i][j], matrix[j][i]); 
        } 
    }
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[0].size()/2; ++j) {
            swap(matrix[i][j], matrix[i][matrix[i].size()-1-j]);
        }
    }
}
void mirror(vector<vector<char>>& matrix){
    for(int i = 0; i < matrix.size(); ++i)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}
void solve(){
    cin >> a >> b;
    vector<vector<char>> mat(a,vector<char>(b));
    for(int i = 0 ; i < a; i++)
    {
        for(int j = 0 ; j < b; j++)
        {
            cin >> mat[i][j];
        }
    }
    int d,e;
    cin >> d >> e;
    vector<vector<char>> mat2(d, vector<char>(e));
    for(int i = 0 ; i < d; i++)
    {
        for(int j = 0 ; j < e; j++)
        {
            cin >> mat2[i][j];
        }
    }
    int cont = 0,ans = 0;
    for(int i = 0 ; i < 4; ++i)
    {
        cont = 0;
        for(int j = 0 ; j < min(a,d); ++j)
        {
            for(int z = 0 ; z < min(b,e); ++z)
            {
                if(mat[j][z] == '#' && mat2[j][z] == '#')
                {
                    cont++;
                    
                }
            }
        }
        ans = max(cont,ans);
        rotate(mat);
    }
    mirror(mat);

    for(int i = 0 ; i < 4; ++i)
    {
        cont = 0;
        for(int j = 0 ; j < min(a,d); ++j)
        {
            for(int z = 0 ; z < min(b,e); ++z)
            {
                if(mat[j][z] == '#' && mat2[j][z] == '#')
                {
                    cont++;
                    
                }
            }
        }
        ans = max(cont,ans);
        rotate(mat);
    }
    cout << ans << endl;
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}