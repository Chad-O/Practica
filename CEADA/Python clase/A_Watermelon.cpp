#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int x = 0, y = 2;
int main(int argc, char const *argv[])
{
    cin >> x;
    int z = x/y;

    if(x == 2 || x%2 != 0){
        cout << "NO";
    }else{
        cout << "YES";
    }
    return 0;
}
