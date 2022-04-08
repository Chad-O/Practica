#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(vector<int>& nums, int k){
    unordered_map<int,int> mp;
    vi ans(k);
    for(int num:nums){
        mp[num]++;
    }
    priority_queue<pair<int,int>> pq;
    for(auto& it:mp){
        pq.push(make_pair(it.first,it.second));
    }
    for(int i = 0; i<=k;++i){
        ans[i] = pq.top().first;
        pq.pop();
    }

}



int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k = 2;
    vi v1= {1,1,1,2,2,3};
    solve(v1,k);
    return 0;
}