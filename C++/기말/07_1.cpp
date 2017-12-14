#include <iostream>
#pragma warning(disable:4996)

using namespace std;

class Book {
private:
	char *title;
	char *isbn;
	int price;
public:
	Book(char *tit, char *isb, int p) {
		title = new char[strlen(tit) + 1];
		strcpy(title, tit);
		isbn = new char[strlen(isb) + 1];
		strcpy(isbn, isb);
		price = p;
	}
	Book(const Book &b) {	//깊은 복사생성자
		title = new char[strlen(b.title) + 1];
		strcpy(title, b.title);
		isbn = new char[strlen(b.isbn) + 1];
		strcpy(isbn, b.isbn);
		price = b.price;
	}
	void ShowBookInfo() {
		cout << "Title : " << title << endl;
		cout << "ISBN : " << isbn << endl;
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
	EBook(char *ti, char *is, int pr, char *d) :Book(ti, is, pr) {
		DRMKey = new char[strlen(d) + 1];
		strcpy(DRMKey, d);
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "DRM Key : " << DRMKey << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("좋은 C++", "123-123-123", 20000);
	book.ShowBookInfo();
	cout << endl;
	//깊은 복사 생성자
	Book b1(book);
	b1.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++EBook", "!234-1234-1234", 10000, "fex010101");
	ebook.ShowEBookInfo();
	cout << endl;
	return 0;
}