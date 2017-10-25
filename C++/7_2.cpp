#include <iostream>
#pragma warning(disable:4996)

using namespace std;

class Book {
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(char *t, char *i, int p) :price(p) {
		title = new char[strlen(t) + 1];
		strcpy(title, t);
		isbn = new char[strlen(i) + 1];
		strcpy(isbn, i);
	}
	void ShowBookInfo() {
		cout << "å ����: " << title << endl;
		cout << "isbn : " << isbn << endl;
		cout << "å ���� : " << price << endl;
	}
	~Book() {
		delete[]title;
		delete[]isbn;
	}
};
class EBook:public Book {
private:
	char *DRMKey;
public:
	EBook(char *t, char *i, int p, char *d) :Book(t, i, p) {
		DRMKey = new char[strlen(d) + 1];
		strcpy(DRMKey, d);
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "DRMKey : " << DRMKey << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("���� C++", "555-12345-890-0", 20000);
	book.ShowBookInfo();
	cout << endl;

	EBook ebook("���� C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
	ebook.ShowEBookInfo();

	return 0;

}