#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
int findJudge(int n, vector<vector<int>>& trust) {
        unordered_map<int,int> mp;
        for(int i = 0 ; i < n; ++i){
            mp[trust[i][i]]++;
        }
        for(auto& it:mp){
            if(it.second == 0){
                cout << it.second;
                return;
            }
        }
    }
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // Write
    return 0;
}