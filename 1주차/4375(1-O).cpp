#include <cstdio>		
#include <vector>		
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include<stack>
using namespace std;
int n;
int main() {
	while (scanf_s("%d", &n) != EOF) {
		int cnt = 1, ret = 1;
		while (true) {
			if (cnt % n == 0) {
				printf("%d\n", ret);
				break;
			}
			else {
				cnt = (cnt * 10) + 1;	//?
				cnt %= n;
				ret++;
			}
		}
	}
	return 0;
}