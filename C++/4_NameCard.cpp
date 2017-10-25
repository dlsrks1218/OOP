#include <iostream>
#pragma warning(disable:4996)

using namespace std;

namespace COMP_POS {
	enum{CLERK, SENOIR, ASSIST, MANAGER};
}

class NameCard {
private:
	char *name;
	char *company;
	char *pnum;
	int rank;
public:
	NameCard(char *n, char *c, char *p, int r):rank(r) {
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		company = new char[strlen(c) + 1];
		strcpy(company, c);
		pnum = new char[strlen(p) + 1];
		strcpy(pnum, p);
	}
	void ShowYourNameCardInfo() {
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << pnum << endl;
		cout << "직급 : ";
		switch (rank) {
		case 0:
			cout << "사원" << endl;
			break;
		case 1:
			cout << "주임" << endl;
			break;
		case 2:
			cout << "대리" << endl;
			break;
		case 3:
			cout << "과장" << endl;
			break;
		}
		cout << endl;
	}
	~NameCard() {
		delete[] name;
		delete[] company;
		delete[] pnum;
	}
};
int main(void) {
	NameCard manClerk("Lee", "ABCEng", "010-1111-1111", COMP_POS::CLERK);
	NameCard manSenior("Hong", "OrangeEng", "010-2222-3333", COMP_POS::SENOIR);
	NameCard manAssist("Kim", "SoGoodComp", "010-3333-4444", COMP_POS::ASSIST);

	manClerk.ShowYourNameCardInfo();
	manSenior.ShowYourNameCardInfo();
	manAssist.ShowYourNameCardInfo();

	return 0;
}