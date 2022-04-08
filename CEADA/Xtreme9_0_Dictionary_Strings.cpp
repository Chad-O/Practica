#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
const int N = int(1e5+3);
int palabras, intentos;

void solve(){
    cin >> palabras >> intentos;
    int cont = 0;
    string pal = "a";
    unordered_map<char, int> mp;
    while(palabras--)
    {
        cin >> pal;
        for(int i = 0 ; i < pal.size(); ++i)
        {
            if(mp.count(pal[i]))
            {
                cont++;
            }else if(mp.count(pal[i]) && cont == 1)
            {
                mp[pal[i]]++; 
            }else
            {
                mp[pal[i]]++;
            }
        }
    }
    unordered_map<char,int> mp1;
    string pal1 = "a";
    int cont1 = mp.size();
    while(intentos--)
    {
        bool prueba = true;
        cin >> pal1;
        for(int i = 0; i < pal1.size(); ++i)
        {
            mp1[pal1[i]]++;
        }
        for(auto& it:mp1)
        {
            if(mp[it.first] != mp1[it.first])
            {
                prueba = false;
            }
        }
        if(prueba)
        {
            cout << "Yes" << " ";
        }else
        {
            cout << "No" << " ";
        }
        if(mp1.size() == cont1) 
        {
            cout << "Yes" << endl;
        }
        else if(mp1.size() < cont1)
        {
            cout << cont1 - mp1.size() << endl;
        }else
        {
            cout << "No" << endl;
        }
    }
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