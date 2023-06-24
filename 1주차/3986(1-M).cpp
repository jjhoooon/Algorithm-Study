#include <cstdio>		
#include <vector>		
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include<stack>
//�ع��� �������� ������, ���ڿ��� �����ų�, �����ų��غ���
//						  (queue, stack ����)
//** 1.���þ��̵�� 2. ���� top���� 3. ���ǹ� ���û����� 
//   4.���ڿ��� ���������� stack�� ����(test case)�̹Ƿ�

//++ "¦����", "����" ==> stack �ǽ��ʼ�!!
using namespace std;
int n, ret;
string s;
int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s;
		stack<char>stk;
		for (char a : s) {
			if (stk.size() && stk.top() == a)stk.pop();
			else stk.push(a);
		}
		if (stk.size() == 0) ret++;
	}
	cout << ret << '\n';
	return 0;
}