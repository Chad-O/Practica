#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(int argc, char const *argv[])
{
    int n,m;
    cin >> n >> m;
    deque<pair<int,int>> li;
    int val = 0;
    for(int i = 0; i<n; ++i){
        cin >> val;
        li.push_back(make_pair(val,i));
    }

    while(li.size()>1){
         pair<int,int> val1 = li.front();
        
        if((val1.first - m) > 0){
            li.push_back(make_pair(val1.first-m , val1.second));
        }
        li.pop_front();
        
    }
    cout << li.front().second+1;
    
    return 0;
}

