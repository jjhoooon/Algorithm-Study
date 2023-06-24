#include <cstdio>		
#include <vector>		
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include<stack>
//해법이 떠오르지 않으면, 문자열을 뒤집거나, 돌리거나해봐라
//						  (queue, stack 형태)
//** 1.스택아이디어 2. 스택 top참조 3. 조건문 스택사이즈 
//   4.문자열을 받을때마다 stack을 정의(test case)이므로

//++ "짝짓기", "폭발" ==> stack 의심필수!!
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