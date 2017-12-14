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
		cout << "깊은 복사 생성자 호출!" << endl;
	}
	void ShowBookInfo() {
		cout << "Title : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "가격 : " << price << endl;
	}
	Book& operator=(const Book& ref) {
		delete[]title;
		delete[]isbn;

		title = new char[strlen(ref.title) + 1];
		strcpy(title, ref.title);
		isbn = new char[strlen(ref.isbn) + 1];
		strcpy(isbn, ref.isbn);
		price = ref.price;
		return *this;
		cout << "대입 연산자 호출!" << endl;
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
	EBook(char *ti, char *is, int pr, char *d) :Book(ti, is, pr) {	//기본 생성자
		DRMKey = new char[strlen(d) + 1];
		strcpy(DRMKey, d);
	}
	EBook(const EBook& b):Book(b) {
		DRMKey = new char[strlen(b.DRMKey) + 1];
		strcpy(DRMKey, b.DRMKey);
		cout << "깊은 복사 생성자 호출!" << endl;
	}
	void ShowEBookInfo() {
		ShowBookInfo();
		cout << "DRM Key : " << DRMKey << endl;
	}
	EBook& operator=(const EBook& ref) {
		Book::operator=(ref);
		delete[]DRMKey;
		DRMKey = new char[strlen(ref.DRMKey) + 1];
		strcpy(DRMKey, ref.DRMKey);
		return *this;
		cout << "대입 연산자 호출!" << endl;
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

	//대입 연산자
	Book b2 = b1;
	b1.ShowBookInfo();
	cout << endl;
	EBook ebook("좋은 C++EBook", "!234-1234-1234", 10000, "fex010101");
	ebook.ShowEBookInfo();
	cout << endl;
	
	//깊은 복사 생성자
	EBook ebook2 = ebook;
	ebook2.ShowEBookInfo();
	cout << endl;

	//대입 연산자
	EBook ebook1 = ebook;		
	ebook1.ShowEBookInfo();
	cout << endl;

	return 0;
}