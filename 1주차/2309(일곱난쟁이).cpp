#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
int a[9];
//순열을 통한 풀이
int main() {
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
	}
	sort(a, a + 9);
	do{
		/*for (int i : a)cout << i << " ";
		cout << '\n';*/
		int sum = 0;
		for (int i = 0; i < 7; i++) sum += a[i];

		if (sum == 100)break;
	} while (next_permutation(a, a + 9));
	for (int i = 0; i < 7; i++) cout << a[i] << '\n';
	return 0;
}