#pragma once
#include <string>
#include <iostream>
using namespace std;

class Error
{
public:
	virtual void what() {}
};
class IndexError : public Error // ������������ ������ ���������
{
protected:
	string msg;
public:
	IndexError() { msg = "������������ ������ ���������."; }
	virtual void what() { cout << msg; }
};

class SizeError : public Error // ������������ ������ ���������
{
protected:
	string msg;
public:
	SizeError() { msg = "������������ ������ ���������."; }
	virtual void what() { cout << msg; }
};

class MaxSizeError : public SizeError
{
protected:
	string msg_;
public:
	MaxSizeError() { SizeError(); msg_ = "�������� ������������ ������."; }
	virtual void what() { cout << msg << msg_; }
};

class NegativeSizeError : public SizeError
{
	string msg_;
public:
	NegativeSizeError() { SizeError(); msg_ = "������������� ������ ����������."; }
	virtual void what() { cout << msg << msg_; }
};

class  NegativeIndex: public IndexError 
{
	string msg_;
public:
	NegativeIndex() { IndexError(); msg_ = "������������� ������ ����������."; }
	virtual void what() { cout << msg << msg_; }
};

class  TooBigIndexError : public IndexError
{
	string msg_;
public:
	TooBigIndexError() { IndexError(); msg_ = "������ ������ �������� ������� ���������."; }
	virtual void what() { cout << msg << msg_; }
};
