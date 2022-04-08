#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> ans(2);
	unordered_map<int, int> mp;

	for (int i = 0; i < nums.size(); ++i) {
		int diff = target - nums[i];
		if (mp.count(diff)) {
			ans[0] = mp[diff];
			ans[1] = i;
			return ans;
		} else {
			mp[nums[i]] = i;
		}
	}
	return ans;
}

int main(int argc, const char** argv) {
    return 0;
}
