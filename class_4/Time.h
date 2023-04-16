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

    // ���������
    int get_hours();
    int get_mins();
    int get_sec();

    // ������������
    void set_hours(int);
    void set_mins(int);
    void set_sec(int);
   
    void Show();
    Time& operator=(const Time& t); // �������� ������������
    friend istream& operator>>(istream& in, Time& t); // �������� �����
    friend ostream& operator<<(ostream& out, const Time& t); // �������� ������
    void operator||(const Time&); // �������� ���������
    

protected:
    int hours;  
    int mins;
    int sec;

};

