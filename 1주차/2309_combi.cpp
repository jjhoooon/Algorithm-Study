#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
int a[9], sum;
vector<int> v;
pair<int, int> ret;

//중첩for문 combination 풀이
void solve() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < i; j++) {
			if (sum - a[i] - a[j] == 100) {
				ret = { i,j };
				return;
			}
		}
	}
}
int main() {
	 
	for (int i = 0; i < 9; i++) {
		cin >> a[i]; sum += a[i];
	}
	solve();
	for (int i = 0; i < 9; i++) {
		if (ret.first == i || ret.second == i) continue;	//조건문에 걸리면, 하단 수행하지않고 반복자 증감 후, 조건식으로 넘어간다.
		v.push_back(a[i]);
	}
	sort(v.begin(), v.end());
	for (int i : v) cout << i << "\n";
	return 0;
}
