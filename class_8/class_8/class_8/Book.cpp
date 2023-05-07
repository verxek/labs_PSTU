#include "Book.h"

Book::~Book(void) {}

Book::Book(void) {
	pages = 0;
}

Book::Book(string N, string A, int P) : Print(N, A) {
	pages = P;
}

Book::Book(const Book& P) {
	name = P.name;
	author = P.author;
	pages = P.pages;
}


void Book::Show() {
	cout << "\nName: " << name;
	cout << "\nAuthor " << author;
	cout << "\nPages " << pages << endl;
}

void Book::Input() {
	getline(cin, name);
	cout << "Enter name: "; getline(cin, name);
	cout << "Enter author: "; getline(cin, author);
	cout << "Enter pages: "; cin >> pages;
}

Book& Book::operator=(const Book& p) {
	if (&p == this) return *this;
	name = p.name;
	author = p.author;
	pages = p.pages;
	return *this;
}