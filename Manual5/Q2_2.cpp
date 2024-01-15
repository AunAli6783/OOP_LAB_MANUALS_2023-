#include <iostream>
#include <string>
using namespace std;
class eve
{
public:

	char *ename;
	char *evenue;
	char edate[11];
	char etime[9];


	/*eve(void)
	{
		char* ename=0;
		char* evenue=0;
		char edate[11] = {};
		char etime[9] = {};
	}*/

	void input()
	{
		cout << "Enter the event name " << endl;
		cin.getline(ename, 50);
		cout << "Enter event venue" << endl;
		cin.getline(evenue,50);
		cout << "Enter date of the event(the format is dd-mm-yyyy " << endl;
		cin.getline(edate,11);
		cout << "Enter event time:" << endl;
		cin.getline( etime,9);
	}
	void display()
	{
		cout << "Entered event name " << ename << endl;
		cout << "Entered event venue :" << evenue << endl;
		cout << "Entered event date " << edate << endl;
		cout << "Entered event time:" << etime << endl;

	}
	/*eve(  char name[12], char venue[50], char date[11], char time[9])
	{
		cout << "Overloaded function is called" << endl;
		ename = name;
		evenue = venue;
		edate[11] = date[11];
		etime[9] = time[9];

	}*/

};
int main()
{
	eve  obj1;
	obj1.input();
	obj1.display();
	return 0;
}