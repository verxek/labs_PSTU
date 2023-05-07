#include "List.h"

List::List() {
	beg = nullptr;
	size = 0;
	cur = 0;
}

List::~List(void) {
	if (beg != 0) delete[] beg;
	beg = 0;
}

List::List(int n) {
	beg = new Object * [n];
	cur = 0;
	size = n;
}

void List::Get_Name() {
	Object** p = beg;
	for (int i = 0; i < cur; i++) {
		cout << (*p)->Get_name() << endl;
		p++;
	}
}

void List::Add() {
	Object* p;
	//âûáîð èç îáúåêòîâ äâóõ âîçìîæíûõ êëàññîâ 
	cout << "1.Print" << endl;
	cout << "2.Book" << endl;
	int y;
	cin >> y;
	if (y == 1) { //äîáàâëåíèå îáúåêòà êëàññà Print
		Print* a = new (Print);
		a->Input();//ââîä çíà÷åíèé àòðèáóòîâ 
		p = a;
		if (cur < size) {
			beg[cur] = p;//äîáàâëåíèå â âåêòîð 
			cur++;
		}
	}
	else if (y == 2) { //äîáàâëåíèå îáúåêòà êëàññà Magazin 
		Book* b = new Book;
		b->Input();
		p = b;
		if (cur < size) {
			beg[cur] = p;
			cur++;
		}
	}
	else return;
}

void List::Show() {
	if (cur == 0) cout << "Empty" << endl;
	Object** p = beg;    //óêàçàòåëü íà óêàçàòåëü òèïà Object 
	for (int i = 0; i < cur; i++) {
		(*p)->Show();   //âûçîâ ìåòîäà Show() (ïîçäíåå ñâÿçûâàíèå) 
		p++;  //ïåðåäâèãàåì óêàçàòåëü íà ñëåäóþùèé îáúåêò
	}
}

int List::operator ()() {
	return cur;
}

void List::Del() {
	if (cur == 0) return; //ïóñòîé 
	cur--;
}