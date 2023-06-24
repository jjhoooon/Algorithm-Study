#include <cstdio>		
#include <vector>		
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
using namespace std;
//1940(주몽)
// 공백을 기준으로하는 숫자 입력 -> substr(),find()
//조합으로 풀자(이중for문)

//*** cin은 1.버퍼저장 2. 버퍼값 읽음
//*** cin은 입력된 정수이외의 공백을 모두 무시하고, 수만 읽음

int n, m, a[15001], cnt;
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> a[i];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) {
			if (m == a[i] + a[j]) cnt++;
		}
	}
	cout << cnt << '\n';

	return 0;
}