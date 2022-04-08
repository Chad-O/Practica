#include  <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
#define MOD 1000000007
void solve(){
    int n, val = 0 , cont = 0, maxi = 0;
    cin >> n;
    vi v1(n);
    unordered_set<int> st;
    for(int i = 0; i<n; ++i){
        cin >> v1[i];
        
    }
    vi ans;

    for(int i = v1.size()-1; i>=0;--i){
        if(!st.count(v1[i])){
            ans.push_back(v1[i]);
            st.insert(v1[i]);
        }
    }

    cout << ans.size() << "\n";
    for(int i = ans.size()-1;i>=0;--i){
        cout << ans[i] << " ";
    }
}
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}