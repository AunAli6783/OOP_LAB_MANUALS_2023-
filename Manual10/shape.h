#pragma once
#include <iostream>
using namespace std;
class shape
{
private:
	int l;
	int w;
public:
	shape() :l(0), w(0)
	{
		cout << "shape() called" << endl;
	}

	void setlenght(int a)
	{
		l = a;
	}
	void setwidth(int b)
	{
		w = b;
	}
	int getlenght()
	{
		return l;
	}
	int getwidth()
	{
		return w;
	}
	~shape()
	{
		cout << "~shape() called " << endl;
	}

};
