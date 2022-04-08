#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, const char** argv) {
    
    vector<vector<int>> mat;
    for(int i  = 0; i < 8; ++i)
    {
        for(int j = 0 ; j < 8 ; ++j)
        {
            if((j+i)%2 == 0)
            {
                mat[i][j] = 'B';
            }else
            {
                mat[i][j] = 'R';
            }
        }
    }
    for(int i  = 0; i < 8; ++i)
    {
        for(int j = 0 ; j < 8 ; ++j)
        {
            cout << mat[i][j];
        }
        cout << endl;
    }
    return 0;
}