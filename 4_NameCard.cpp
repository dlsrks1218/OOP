#include <iostream>

using namespace std;

namespace COMP_POS {
	enum{CLERK, SENOIR, ASSIST, MANAGER};
}

class NameCard {
private:
	char *name;
	char *company;
	char *pnum;
	int ran;
public:
	NameCard(char *n, char *c, char *p, int r):name(n), company(c), pnum(p), ran(r) {

	}
	void ShowYourNameCardInfo() {
		cout << "이름 : " << name << endl;
		cout << "회사 : " << company << endl;
		cout << "전화번호 : " << pnum << endl;
		cout << "직급 : ";
		switch (ran) {
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
		cout<<endl;
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