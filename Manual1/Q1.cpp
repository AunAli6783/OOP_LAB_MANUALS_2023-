#include <iostream>
using namespace std;
// allocating memory
int* allocatememory(int& size, int* p)
{
	p = new int[size];
	return p;
}
// input value 
void inputmatrix(int* p, const int s)
{
	cout << "Enter the value of the matrix :" << endl;
	for (int i = 0; i < s; i++)
	{
		cin >> p[i];

	}
}
// displaying matrix
void diaplaymatrix(int* p, int s)
{
	cout << "Your matrix is :" << endl;
	for (int i = 0; i < s; i++)
	{
		cout << p[i] << endl;
	}
}
//maximum row
int maxrow(int* p, int s)
{
	int temp = 0;
	for (int i = 0; i < s; i++)
	{
		if (p[i] > temp)
		{
			temp = p[i];
		}
	}
	return temp;

}
//deallocating memory
void deallocate(int* p, int s)
{
	delete[] p;

}
void main()
{

	int s, p = 0;
	cout << "Enter the size  of the matrix :" << endl;
	cin >> s;

	allocatememory(s, &p);
	inputmatrix(&p, s);
	diaplaymatrix(&p, s);
	int max = maxrow(&p, s);
	cout << "The maximum element of the matrix is :" << endl;
	cout << max << endl;
	deallocate(&p, s);

}
