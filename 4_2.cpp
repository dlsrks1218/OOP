#include <iostream>

using namespace std;

class Person {
private:
	char *name;
	int age;
public:
	Person(char *myname, int myage) {
		//int len = strlen(myname) + 1;
		name = new char[strlen(myname) + 1];
		strcpy_s(name,strlen(myname)+1 ,myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Person() {
		delete[]name;
		cout << "Called destructor!" << endl;
	}
};

int main(void) {
	Person p1("������", 25);
	Person p2("��âȯ", 26);

	p1.ShowPersonInfo();
	p2.ShowPersonInfo();

	return 0;
}