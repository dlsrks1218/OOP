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
		cout << "�̸� : " << name << endl;
		cout << "ȸ�� : " << company << endl;
		cout << "��ȭ��ȣ : " << pnum << endl;
		cout << "���� : ";
		switch (ran) {
		case 0:
			cout << "���" << endl;
			break;
		case 1:
			cout << "����" << endl;
			break;
		case 2:
			cout << "�븮" << endl;
			break;
		case 3:
			cout << "����" << endl;
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