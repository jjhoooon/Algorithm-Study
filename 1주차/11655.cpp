#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;

string s;
int main() {
	getline(cin, s);	//���⵵ ���ڿ��� ����
	for (int i = 0; i < s.size(); i++) {
		//�빮���ΰ��
		if (s[i] >= 65 && s[i] < 90) {
			if (s[i] + 13 > 90) s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		else if (s[i] >= 97 && s[i] <= 122) {
			if (s[i] + 13 > 122)s[i] = s[i] + 13 - 26;
			else s[i] = s[i] + 13;
		}
		cout << s[i];
	}
	return 0;
}