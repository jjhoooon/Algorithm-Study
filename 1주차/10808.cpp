#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
string str;
int cnt[26];
int main() {
	cin >> str;
	for (char a : str) {
		cnt[a - 'a']++;
	}
	for (int i = 0; i < 26; i++) cout << cnt[i] << " ";

	return 0;
}