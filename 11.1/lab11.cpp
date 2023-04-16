#include <iostream>
using namespace std;
// однонаправленные списки

struct ListElem
{
    int data;
    ListElem* next;
};

ListElem* createList(int n)    // создание однонаправленного списка
{
    ListElem* start;          // начальный элемент
    ListElem* prev, * curr; // прошлый и текущий элемент
    start = new ListElem;
    cin >> start->data;
    start->next = nullptr;  
    prev = start;
    for (int i = 0; i < n - 1; i++)
    {
        curr = new ListElem;
        cin >> curr->data;
        curr->next = nullptr;
        prev->next = curr;
        prev = curr;
    }
    return start;
}

void insert_element(ListElem*& start, int pos, int k, int& size)  // вставка одного элемента в заданную позицию
{
    size++;
    ListElem* first = start;
    for (int i = 1; i < pos - 1; i++)
    {
        first = first->next;
    }

    ListElem* new_element = new ListElem;
    cout << "Введите элемент ";
    cin >> new_element->data;

    if (pos == 1)
    {
        new_element->next = first;
        start = new_element;
    }
    else
    {
        new_element->next = first->next;
        first->next = new_element;
    }
}
void insert_elements(ListElem*& list, int pos, int k, int& size)   // вставка k элементов на заданную позицию pos
{
    for (int i = 0; i < k; i++)
    {
        insert_element(list, pos + i, k, size);
    }
}

void delete_element(ListElem*& start, int pos, int k, int& size)  // удаление одного элемента с заданной позиции
{
    size--;
    ListElem* first = start;
    ListElem* last;
    for (int i = 1; i < pos - 1; i++)
    {
        first = first->next;
    }
    if (pos == 1)
    {
        start = first->next;
        first->next = start;
    }
    else
    {
        last = first->next->next;
        first->next = last;
    }
}

void delete_elements(ListElem*& start, int pos, int k, int& size)  // удаление k элементов с заданной позиции
{
    size -= k;
    ListElem* first = start;
    ListElem* last;
    for (int i = 1; i < pos - 1; i++)
    {
        first = first->next;;
    }
    last = first;

    for (int i = 0; i < k; i++)
    {
        last = last->next;
    }

    if (pos == 1)
    {
        start = last;
    }
    else
    {
        first->next = last->next;
    }
}

void search_element(ListElem* start, int element)   // поиск элемента 
{
    ListElem* curr = start;
    int pos = 0;
    while (curr->data != element && curr->next != nullptr)
    {
        curr = curr->next;
        pos++;
    }
    if (curr->data == element)
    {
        cout << "Элемент найден." << endl;
    }
    else
    {
        cout << "Элемент не найден." << endl;
    }
}

void printList(ListElem* start, int n)   // вывод элементов списка
{
    ListElem* curr = start;
    for (int i = 0; i < n; i++)
    {
        cout << curr->data << ' ';
        curr = curr->next;
    }
    cout << endl;
}

void deleteList(ListElem* list)   // удаление списка
{
    delete list;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int size, pos, k, element;

    cout << "Введите размер списка: ";
    cin >> size;
    cout << "Введите значения элементов в списке: ";
    ListElem* list = createList(size);
    cout << "Вывод списка:" << endl;
    printList(list, size);

    cout << "Введите на какую позицию хотите добавить элемент: ";
    cin >> pos;
    insert_element(list, pos, 1, size);
    cout << "Вывод списка:" << endl;
    printList(list, size);

    cout << "Введите на какую позицию хотите добавить элементы и какое количество: ";
    cin >> pos;
    cin >> k;
    insert_elements(list, pos, k, size);
    cout << "Вывод списка:" << endl;
    printList(list, size);

    cout << "Введите на какой позиции хотите удалить элемент: ";
    cin >> pos;
    delete_element(list, pos, 1, size);
    cout << "Вывод списка:" << endl;
    printList(list, size);

    cout << "Введите на какой позиции хотите удалить элементы и какое количество: ";
    cin >> pos;
    cin >> k;
    delete_elements(list, pos, k, size);
    cout << "Вывод списка:" << endl;
    printList(list, size);

    cout << "Какой элемент вы хотите найти?: ";
    cin >> element;
    search_element(list, element);
    deleteList(list);
    return 0;
}