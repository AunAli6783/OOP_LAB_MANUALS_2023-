//#include <iostream>
//using namespace std;
//
//class animal
//{
//	virtual void makesound()const = 0;
//	virtual void displayinfo()const = 0;
//};
//
//class lion : public animal
//{
//private:
//	string manecolour;
//public:
//	lion() :manecolour("") {}
//	void getmane(string m)
//	{
//		manecolour = m;
//	}
//	void displayinfo() const
//	{
//		cout << "The colour of lion is :" << manecolour << endl;
//	}
//	void makesound()const
//	{
//		cout << "The sound that lion makes is GHURAAAAAAAAA!!" << endl;
//	}
//};
//class parrot : public animal
//{
//	string feathercolour;
//public:
//	parrot():feathercolour(""){}
//	void getparrot(string c)
//	{
//		feathercolour = c;
//	}
//	void displayinfo()const
//	{
//		cout << "The colour of parrot is :" << feathercolour << endl;
//	}
//	void makesound()const
//	{
//		cout << "The sound that lion makes is mitho mitho!!" << endl;
//	}
//};
//int main()
//{
//	lion l;
//	l.getmane("yellow");
//	l.displayinfo();
//	l.makesound();
//
//	parrot p;
//	p.getparrot("Green");
//	p.displayinfo();
//	p.makesound();
//
//
//
//		return 0;
//	}
//
//
//
//
//// by using abstartct class we can override the function in it in the child classes and they will help us to use the differnet function with same class name
////by using abstract class add complexity
//// m=no we cannot instantiated the abstract class