#include <cstdio>		//https://beginnerdeveloper-lit.tistory.com/78
#include <vector>		//���ؿ� ���� ������
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
		//atoi(s.c_str()) ; s�� ���ڶ�� 0 / �װ� �ƴϸ� "����" ��ȯ
		if(atoi(s.c_str()) == 0) {	//s�� ���ڶ��
			cout<<mp[s]<<'\n';
		}
		else {								//���ڰ� �ƴϸ�,
			cout << mp2[atoi(s.c_str())]<<'\n';
		}
	}
	
	return 0;
}




//------------- �¶��� ����
#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>
using namespace std;

string pokemon[100000];

int main() {
	map<string, int> P;
	int N;               // ������ ���ϵ� ���ϸ� ��
	int M;               // ����� �ϴ� ������ ��
	string input_name;   // ����� �Ǵ� ���� �� �Էµ� �̸�
	int input_num;       // ����� �Ǵ� ���� �� �Էµ� ��ȣ

	cin.tie(0);
	ios::sync_with_stdio(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> pokemon[i];
		P.insert(make_pair(pokemon[i], i));
	}

	for (int i = 0; i < M; i++) {
		cin >> input_name;

		// 1. �Էµ� ���� ������ ���
		if (isdigit(input_name[0]) != 0) {
			input_num = stoi(input_name) - 1;
			cout << pokemon[input_num] << "\n";
		}

		// 2. �Էµ� ���� ������ ���
		else {
			auto index = P.find(input_name);
			cout << index->second + 1 << "\n";
		}
	}

	return 0;
}