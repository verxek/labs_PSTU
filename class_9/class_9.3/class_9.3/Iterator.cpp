#include "Iterator.h"

Iterator::Iterator() { elem = 0; }

void Iterator::operator+(int n) { elem = elem + n; }

void Iterator::operator++() { ++elem; }
void Iterator::operator--() { --elem; }
int& Iterator::operator *() const { return*elem; }
bool Iterator::operator!=(const Iterator& it) { return elem != it.elem; }
