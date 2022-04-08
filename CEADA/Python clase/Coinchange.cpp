#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
unordered_map<int,int> mp;
int solve(vector<int>& monedas, int target,unordered_map<int,int> mp){
    if(target <0){
        return INT_MAX;
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int target =11;
    vector<int> monedas = {1,2,3};
    for(int c:monedas){
        mp[c]++;
    }
    solve(monedas,target,mp);
    return 0;
}