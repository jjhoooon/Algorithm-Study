#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
int n;
vector<string> v;
string s, ori_s, pre, suf;
string OK = "DA", NO = "NE";

int main() {
	cin >> n;
	cin >> ori_s;
	int pos = ori_s.find('*');
	pre = ori_s.substr(0, pos);
	suf = ori_s.substr(pos + 1);
	for (int i = 0; i < n; i++) {
		cin >> s;
		if (pre.size() + suf.size() > s.size()) {
			v.push_back(NO);
		}
		else {
			if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))v.push_back(OK);	// suf == s.substr(s.size() - suf.size())
			else v.push_back(NO);
		}
	}
	for (string a : v) cout << a << '\n';
	
	return 0;
}