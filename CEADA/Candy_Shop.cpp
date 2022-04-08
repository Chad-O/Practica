#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);


int solve()
{
    int N, k;
    cin >> N >> k;
    unordered_map<ll, ll> candy;

    ll type, cant;
    int c = 0;
    for (int i = 0; i < N; i++)
    {
        cin >> type >> cant;
        if(cant<=k)
        {
            if(cant == k)
            {
                c++;
            }
            else
            {
                candy[type]=cant;
            }
        }
    }

    //diferentes marcas
    ll suma = 0;
    for (auto& it:candy)
    {
        suma += it.second;
        if(suma == k)
        {
            suma = 0;
            c++;
        }
        else if(suma>k)
        {
            suma = 0;
        }
    }
    //muchos de uno
    ll tem = 0;
    for (auto it:candy)
    {
        tem = 0;
        while(it.first>tem)
        {
            tem++;
            if(tem*it.second == k)
            {
                c++;
                //cout << "temmie";
            }
            
            //cout << tem << "temmmm: " << tem*it.second << "\n";
        }
    }
    cout << c << "\n";
    return 0;
}

int main(int argc, const char** argv) 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}