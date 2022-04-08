// time-limit: 4000
// problem-url: https://csacademy.com/ieeextreme15/task/expression/
#include <bits/stdc++.h>
using namespace std;
#define MP make_pair
#define umap unordered_map
#define uset unordered_set
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
const int MOD = 1000000007;
#ifndef ONLINE_JUDGE
#define deb(x) cout << #x << '=' << x << '\n'
#else
#define deb(x)
#endif

ll operate(ll a, ll b, char opr) {
	switch (opr) {
		case '-':
			return (a - b) % MOD;
		case '+':
			return (a + b) % MOD;
		case '*':
			return (a * b) % MOD;
	}
}

void operate(stack<ll>& vals, stack<char>& opers) {
	ll val1 = vals.top(); vals.pop();
	ll val2 = vals.top(); vals.pop();
	char oper = opers.top(); opers.pop();
	vals.push(operate(val2, val1, oper) % MOD);
}

int opePrecedence(char oper) {
	if (oper == '-' || oper == '+') {
		return 1;
	} else if (oper == '*') {
		return 2;
	} else return 0;
}

bool validate(string& s) {
	uset<char> operators = {'-', '+', '*'};
	stack<char> para;

	if (operators.count(s[0]) || s[0] == ')') return false;
	if (s[0] == '(') para.push('(');

	for (int i = 1; i < s.size(); ++i) {
		if (operators.count(s[i])) {
			if (operators.count(s[i-1])) {
				return false;
			}
			if (s[i-1] == '(') {
				return false;
			}
		} else if (s[i] == '(') {
			if (s[i-1] == ')') {
				return false;
			}
			if (isdigit(s[i-1])) {
				return false;
			}
			para.push(s[i]);
		} else if (s[i] == ')') {
			if (s[i-1] == '(') {
				return false;
			}
			if (para.empty()) {
				return false;
			} else {
				para.pop();
			}
		} else if (isdigit(s[i])) {
			if (s[i-1] == ')') {
				return false;
			}
			continue;
		}
	}
	if (operators.count(s.back()) && s.back() != '(') {
		return false;
	}
	if (!para.empty()) {
		return false;
	} else {
		return true;
	}
}


string E;
void solve() {
	cin >> E;
	
	if (!validate(E)) {
		cout << "invalid\n";
		return;
	}

	uset<char> operators = {'-', '+', '*'};
	stack<char> opers;
	stack<ll> vals;
	

	// + - * ()
	for (int i = 0; i < E.size(); ++i) {
		if (isdigit(E[i])) {
			ll currVal = 0;
			while (i < E.size() && isdigit(E[i])) {
				currVal  = (currVal*10) + E[i]-'0';
				i++;
			}
			vals.push(currVal);
			i--;
		} else if (E[i] == '(') {
			opers.push('(');
		} else if (E[i] == ')') {
			while (!opers.empty() && opers.top() != '(')  {
				operate(vals, opers);
			}
			if (!opers.empty()) opers.pop();
		} else {
			while (!opers.empty() && opePrecedence(opers.top()) >= opePrecedence(E[i])) {
				operate(vals, opers);
			}
			opers.push(E[i]);
		}
	}
	while (!opers.empty()) {
		operate(vals, opers);
	}
	if (vals.top() < 0) {
		cout << MOD + vals.top() << '\n';
	} else {
		cout << (vals.top() % MOD) << '\n';
	}
}

int main(int argc, const char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; cin >> t;
	while (t--) {
		solve();
	}
    return 0;
}

