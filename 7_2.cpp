#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Book {
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(char *t, char *i, int p):price(p) {
		title = new char[strlen(t)+1];
		strcpy_s(title, strlen(t) + 1, t);
		isbn = new char[strlen(i) + 1];
		strcpy_s(isbn, strlen(i) + 1, i);
	}
	void ShowBookInfo() {
		cout << "책 제목 : " << title << endl;
		cout << "isbn : " << isbn << endl;
		cout << "가격 : " << price << endl;
	}
	~Book() {
		delete[]title;
		delete[]isbn;
	}
};
class EBook :public Book {
private:
	char *DRMKey;
public:
	EBook(char *t1, char *i1, int p1, char *d) :Book(t1, i1, p1) {
		DRMKey = new char[strlen(d)+1];
		strcpy_s(DRMKey, strlen(d) + 1, d);
	}
	void ShowEBookInfo() {
		Book::ShowBookInfo();
		cout << "DRMKey : " << DRMKey << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("좋은 C++", "555-12345", 20000);
	book.ShowBookInfo();
	cout << endl;

	EBook ebook("좋은 C++ ebook", "555-12345-1", 10000, "fdx0010");
	ebook.ShowEBookInfo();


	return 0;
}