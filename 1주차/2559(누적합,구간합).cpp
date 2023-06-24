#include <cstdio>
#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
using namespace std;
//구간합;누적합 => prefix sum, psum[i] = psum[i-1] + a[i];
typedef long long ll;
int n, k, temp, psum[100001], ret = -10000004;
int main() {
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {					
		cin >> temp; psum[i] = psum[i - 1] + temp;	//누적합 공식
	}
	for (int i = k; i <= n; i++) {
		ret = max(ret, psum[i] - psum[i - k]);		//구간합 max 선별 ;; for (i=k -> n) psum[i] - psum[i - k]
	}
	cout << ret << '\n';
	return 0;
}