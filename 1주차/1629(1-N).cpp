#include <cstdio>		
#include <vector>		
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include<stack>
//문제의 최소, 최대 범위를 젤먼저 확인해라!!
using namespace std;
typedef long long ll;
ll a, b, c;

ll go(ll a, ll b) {
	if (b == 1)return a % c;

	ll ret = go(a, b / 2);
	ret = (ret * ret) % c;
	if (b % 2) ret = (ret * a) % c;	//
	return ret;
}
int main() {
	cin >> a >> b >> c;
	cout << go(a, b) << '\n';
	return 0;
}