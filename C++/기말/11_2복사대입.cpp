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
	Book(const Book &b) {	//���� ���������
		title = new char[strlen(b.title) + 1];
		strcpy(title, b.title);
		isbn = new char[strlen(b.isbn) + 1];
		strcpy(isbn, b.isbn);
		price = b.price;
		cout << "���� ���� ������ ȣ��!" << endl;
	}
	void ShowBookInfo() {
		cout << "Title : " << title << endl;
		cout << "ISBN : " << isbn << endl;
		cout << "���� : " << price << endl;
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
		cout << "���� ������ ȣ��!" << endl;
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
	EBook(char *ti, char *is, int pr, char *d) :Book(ti, is, pr) {	//�⺻ ������
		DRMKey = new char[strlen(d) + 1];
		strcpy(DRMKey, d);
	}
	EBook(const EBook& b):Book(b) {
		DRMKey = new char[strlen(b.DRMKey) + 1];
		strcpy(DRMKey, b.DRMKey);
		cout << "���� ���� ������ ȣ��!" << endl;
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
		cout << "���� ������ ȣ��!" << endl;
	}
	~EBook() {
		delete[]DRMKey;
	}
};

int main(void) {
	Book book("���� C++", "123-123-123", 20000);
	book.ShowBookInfo();
	cout << endl;

	//���� ���� ������
	Book b1(book);
	b1.ShowBookInfo();
	cout << endl;

	//���� ������
	Book b2 = b1;
	b1.ShowBookInfo();
	cout << endl;
	EBook ebook("���� C++EBook", "!234-1234-1234", 10000, "fex010101");
	ebook.ShowEBookInfo();
	cout << endl;
	
	//���� ���� ������
	EBook ebook2 = ebook;
	ebook2.ShowEBookInfo();
	cout << endl;

	//���� ������
	EBook ebook1 = ebook;		
	ebook1.ShowEBookInfo();
	cout << endl;

	return 0;
}