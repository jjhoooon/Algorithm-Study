#include <cstdio>		//https://beginnerdeveloper-lit.tistory.com/78
#include <vector>		//백준에 문제 없어짐
#include <algorithm>
#include <iostream>
#include <string>
#include <tuple>
#include <map>
//#include <cstdlib>
using namespace std;
int n, m;
string s;
map<string, int> mp;	
map<int, string> mp2;
string a[100004];
vector<string> v;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> s;
		mp[s] = i + 1;
		mp2[i + 1] = s;
		a[i + 1] = s;
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		//atoi(s.c_str()) ; s가 문자라면 0 / 그게 아니면 "숫자" 반환
		if(atoi(s.c_str()) == 0) {	//s가 문자라면
			cout<<mp[s]<<'\n';
		}
		else {								//문자가 아니면,
			cout << mp2[atoi(s.c_str())]<<'\n';
		}
	}
	
	return 0;
}




//------------- 온라인 정답
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string pokemon[100000];

int main() {
	map<string, int> P;
	int N;               // 도감에 수록된 포켓몬 수
	int M;               // 맞춰야 하는 문제의 수
	string input_name;   // 맞춰야 되는 문제 중 입력된 이름
	int input_num;       // 맞춰야 되는 문제 중 입력된 번호

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> pokemon[i];
		P.insert(make_pair(pokemon[i], i));
	}

	for (int i = 0; i < M; i++) {
		cin >> input_name;

		// 1. 입력된 것이 숫자인 경우
		if (isdigit(input_name[0]) != 0) {
			input_num = stoi(input_name) - 1;
			cout << pokemon[input_num] << "\n";
		}

		// 2. 입력된 것이 문자인 경우
		else {
			auto index = P.find(input_name);
			cout << index->second + 1 << "\n";
		}
	}

	return 0;
}