#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans(nums.size());
        for(int i = 0; i < n;++i){
            ans[2*i] = nums[i];
            cout << ans[2*i];
            ans[2*i+1] = nums[n+i];        
            cout << ans[2*i+1];
        }
        
        return ans;
}

int main(int argc, const char** argv) {
    vector<int> v = {0,1,2,3,4,5};
    shuffle(v,3);
    return 0;
}