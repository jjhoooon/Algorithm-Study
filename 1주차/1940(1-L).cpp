#include <cstdio>		
#include <vector>		
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
using namespace std;
//1940(�ָ�)
// ������ ���������ϴ� ���� �Է� -> substr(),find()
//�������� Ǯ��(����for��)

//*** cin�� 1.�������� 2. ���۰� ����
//*** cin�� �Էµ� �����̿��� ������ ��� �����ϰ�, ���� ����

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