#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>
using namespace std;


/* 
       ������� ������� � �������� ������� ����������� �����, �������� 2 �������� � ������ �����.
*/

struct patient
{
    char name[100];
    char adress[100];
    string mednum;
    char polisnum[10];
};


void del_el(patient p[], string num, int k)
{
    for (int i = 0; i < k; i++) {
        bool f = 1;
        if (!(num.length() == 5)) {
            f = 0;
            break;
        }
        else {
            for (int j = 0; j < 5; j++) {
                if (!(num[j] == p[i].mednum[j])) {
                    f = 0;
                    break;
                }
                if (f == 1) {
                    for (int j = i; j < (k - 1); j++) {
                        p[j] = p[j + 1];
                    }
                }
            }
        }
    }
}


void vvod_str(int k, patient p[]) {
    for (int i = 0; i < k; ++i)
    {
        std::cout << "������� �" << i + 1 << ":" << endl;
        if (i == 0)
        {
            std::cin.getline(p[i].name, 100);
        }
        std::cout << "������� ��� :" << endl; std::cin.getline(p[i].name, 100);
        std::cout << "������� ����� :" << endl; std::cin.getline(p[i].adress, 100);
        std::cout << "������� ����� ����������� ����� (5 ����):" << endl; std::getline(cin, p[i].mednum);
        std::cout << "������� ����� ������ :" << endl;  std::cin.getline(p[i].polisnum, 10);
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, 0);

    int k; //���-�� ����������� ���������
    std::cout << "������� ���������� ���������: ";
    std::cin >> k;
    patient p[100];  // ������ ��������   

    vvod_str(k, p);   // ���� ������ ���������

    fstream file;
    file.open("Out.txt",  fstream::out | fstream::in | fstream::trunc);  // �������� ����� 
    if (!file.is_open())
    {
        std::cout << "������ �������� �����!" << endl;
    }
    else
    {
        for (int i = 0; i < k; ++i) {// ���� ������ � ����
            file << p[i].name << " " << p[i].adress << " " << p[i].mednum << " " << p[i].polisnum << endl;
        }
    }

    string num;
    std::cout << "������� ����� ����������� �����, ������� � ������� ����� �������: "; std::cin >> num;

    std::cout << "������ �� ����� �� ��������: " << endl;
    string s;
    file.seekg(0, file.beg);
    for (int i = 0; i < k; i++) {
        getline(file, s, '\n');
        cout << s << endl;
    }
    

    del_el(p, num, k);   // �������� �������� � �������� ������� ��� �����

    std::cout << endl;
    file.close(); // �������� �����


    file.open("Out.txt", fstream::out | fstream::in | fstream::trunc);   // ��������� ���� ��� ������ ��� ���������� ��������
    for (int i = 0; i < (k - 1); i++) {     // ���� ������ � ����
        file << p[i].name << " " << p[i].adress << " " << p[i].mednum << " " << p[i].polisnum << endl;
    }   
 
    std::cout << "������ �� ����� ����� ��������:" << endl;
    
    file.seekg(0, file.beg);
    /*for (int i = 0; i < (k - 1); i++)*/ 
    while (!file.eof()){
        getline(file, s, '\n');
        cout << s << endl;
    }
    
    // --------------------------------------------------------------------------------------------------------------
    for (int i = (k-1); i >= 0; i--) { // ����������� ����� � ������ ������� ��� ���� ����� ���������
        p[i + 2] = p[i];

    }
    file.close();
    

    std::cout << endl;

    
    std::cout << "�������� ���� ���������!" << endl;
    vvod_str(2, p);
    
    
    file.open("Out.txt", fstream::out | fstream::in | fstream::trunc);
    std::cout << "������ � ����� ������ ����������:" << endl;
    
    for (int i = 0; i < (k + 1); i++) { // ���� ������ � ����
        file << p[i].name << " " << p[i].adress << " " << p[i].mednum << " " << p[i].polisnum << endl;
    } 
    file.seekg(0, file.beg);
    while (!file.eof()) {
        getline(file, s, '\n');
        cout << s << endl;
    }
    
    
    file.close();
    return 0;
}