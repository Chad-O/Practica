#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;
typedef long long ll;

string nombre;

int val = 0;
int x, y =0;
set<string> ans;
unordered_map<string,int> mp;

int main(int argc, char const *argv[])
{
    int maxi = INT_MIN;
    string nombre[1001];
    int val[1001] = {0};
    string ans1;
    cin >> x;   
    while(y<x){
        cin >> nombre[y] >> val[y];
        mp[nombre[y]] +=val[y];
        ++y;
    }
    for(auto& it:mp){
        maxi = max(maxi,it.second);
    }
    for(auto& it:mp){
        if(it.second == maxi){
            ans.insert(it.first);
        }
    }
    mp.clear();
    for(int i = 0; i<x;++i){
        mp[nombre[i]] += val[i];
        if(ans.count(nombre[i]) && mp[nombre[i]] >= maxi){
            cout << nombre[i];
            break;
        }
    }
    return 0;
}
