#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main(void) {
	vector<string>names;
	
	cout << "�̸��� 5�� �Է��϶�" << endl;
	for (int i = 0; i < 5; i++) {
		string name;
		cout << i+1 << ">>";
		cin >> name;
		names.push_back(name);
	}
	string latter;
	vector<string>::iterator it;
	for (it = names.begin(); it != names.end(); it++) {
		if (latter < *it)
			latter = *it;
	}
	cout << "���� �� ���� �ڿ� ������ �̸��� " << latter;

	return 0;
}