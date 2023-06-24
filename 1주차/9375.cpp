#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <map>
using namespace std;

typedef long long ll;
int t, n;
string a, b;
vector<int> v;

int main() {
	cin >> t;
	while (t--) {
		map<string, int>_map;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a >> b;
			_map[b]++;	//추가 공략필요
		}
		long long ret = 1;
		for (auto c : _map) {
			ret *= ((ll)c.second + 1);
		}
		ret--;
		//cout << ret << '\n';
		v.push_back(ret);
	}
	for (ll a : v) cout << a << '\n';
	return 0;
}
