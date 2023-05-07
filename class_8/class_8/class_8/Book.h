#pragma once
#include "Print.h"
class Book :
    public Print
{
public:
    Book(void);
    Book(string, string, int);
    Book(const Book&);
    ~Book(void);

    int Get_pages() { return pages; }
    void Set_pages(int P) { pages = P; }

    string Get_name() { return name; }
    void Show();
    void Input();

    Book& operator=(const Book&);

protected:
    int pages;
};