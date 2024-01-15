#pragma once
#include <iostream>
#include "shape.h"
using namespace std;

class square :public shape
{
private:
	int area;
	int vol;
public:

	square() :area(0), vol(0)
	{
		cout << "square() called" << endl;
	}
	void areacal()
	{
		area = getlenght() * getwidth();
	}
	void volcal()
	{
		vol = getlenght() * getlenght() * getwidth();
	}
	void print()
	{
		cout << "The are of the sqaure is " << area << endl;
		cout << "The volume of the sqaure is " << vol << endl;
	}
	~square()
	{
		cout << "~square() called" << endl;
	}
};