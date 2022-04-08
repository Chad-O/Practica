#include <bits/stdc++.h>
using namespace std;
 
string s;
 
int minPeek(string& s, int left, int right) {
	if (right == left) {
		return right;
	}
	if (right - left == 1) {
		if (s[left] < s[right]) {
			return left;
		} else {
			return right;
		}
	}
 
	int mid = (right+left)/2;
	
	if (s[mid-1] < s[mid]) {
		return minPeek(s, left, mid-1);
	} else if (s[mid+1] < s[mid]) {
		// Right
		return minPeek(s, mid+1, right);
	} else {
		return mid;
	}
}
 
void solve() {
	string alpha = "abcdefghijklmnopqrstuvwxyz";
	cin >> s;
	if (s.size() > 26) {
		cout << "NO" << endl;
		return;
	}
	int idx = minPeek(s, 0, s.size()-1);
 
	if (s[idx] != 'a') {
		cout << "NO" << endl;
		return;
	}
	int left = idx;
	int right = idx;
	int idxAlpha = 1;
	while (left-1 >= 0 || right+1 < s.size() && idxAlpha < 26) {
		if (left-1 >= 0 && alpha[idxAlpha] == s[left-1]) {
			left--;
		} else if (right+1 < s.size() && alpha[idxAlpha] == s[right+1]) {
			right++;
		} else {
			cout << "NO" << endl;
			return;
		}
		idxAlpha++;
	}
	if (right-left == s.size()-1) {
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
 
int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}