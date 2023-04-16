#include <iostream>
#include "Triad.h"

class Time :
    public Triad
{
   
public:
    Time(void);
    ~Time(void);
    Time(int, int, int);
    Time(const Time&);

    // селекторы
    int get_hours();
    int get_mins();
    int get_sec();

    // модификаторы
    void set_hours(int);
    void set_mins(int);
    void set_sec(int);
   
    void Show();
    Time& operator=(const Time& t); // операция присваивания
    friend istream& operator>>(istream& in, Time& t); // операция ввода
    friend ostream& operator<<(ostream& out, const Time& t); // операция вывода
    void operator||(const Time&); // операция сравнения
    

protected:
    int hours;  
    int mins;
    int sec;

};

