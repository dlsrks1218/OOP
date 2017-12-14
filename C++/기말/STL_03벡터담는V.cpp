#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	vector <vector<int>> v;
	vector <int> v1;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	vector <int> v2;
	v2.push_back(11);
	v2.push_back(22);
	v2.push_back(33);
	vector <int> v3;
	v3.push_back(111);
	v3.push_back(222);
	v3.push_back(333);
	
	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);

	
	vector <int>::iterator it;
	for (int i = 0; i < v.size(); i++) {
		for (it = v[i].begin(); it != v[i].end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	
	return 0;
}