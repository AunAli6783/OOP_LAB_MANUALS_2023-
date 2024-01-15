#pragma once
#include <iostream>
#include "shape.h"
using namespace std;
class rectangle :public shape
{
	int a;
	int volume;

public:
	rectangle() :a(0), volume(0)
	{
		cout << "Rectangle() called" << endl;
	}
	void recarea()
	{
		a = getlenght() * getwidth();
	}
	void recvol()
	{
		volume = getlenght() * getlenght() * getwidth();
	}
	void print()
	{
		cout << "the area of the rectangle is " << a << endl;
		cout << "The volume of the rectangle is " << volume << endl;
	}
	~rectangle()
	{
		cout << "~Rectangle() called" << endl;
	}
};