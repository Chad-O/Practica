#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(int argc, char const *argv[])
{
    vector<int> nums ={2,3,1,5,7};
     //por default es max
    make_heap(nums.begin(),nums.end());
    for(int num:nums){
        cout << num <<' ';
    }
    cout<<'\n';

    return 0;
}
