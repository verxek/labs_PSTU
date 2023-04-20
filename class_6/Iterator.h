#pragma once
class Iterator
{
private:
	friend class Plenty;
	int* elem;
public:
	Iterator();
	void operator++();
	void operator--();
	int& operator *() const;
	bool operator!=(const Iterator& it);
};