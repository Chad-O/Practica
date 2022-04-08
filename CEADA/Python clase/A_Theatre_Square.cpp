#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
    ll x,y,a,ans,ans1;
    cin >> x >> y >> a;
    
    if(x%a == 0){
        ans = x/a;
    }else{
        ans = x/a +1;
    }
    if(y%a == 0){
        ans1 = y/a;
    }else{
        ans1 = y/a+1;
    }
    cout << ans*ans1;
}
