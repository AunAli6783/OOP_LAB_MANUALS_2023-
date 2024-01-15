//#include <iostream>
//using namespace std;
//class employee
//{
//	string name;
//	string name2;
//	int sal;
// public:
//	 employee():name("NULL"),name2("NULL"),sal(-1){}
//	 
//    employee (string n1, string n2, int s)
//	{
//		name = n1;
//		name2 = n2;
//		sal = s;
//	}
//	void setname(string na)
//	{
//		name = na;
//	}
//	string set1()
//	{
//		return name;
//	}
//	void setname2(string na)
//	{
//		name2 = na;
//	}
//	string set2()
//	{
//		return name2;
//	}
//	void setsal(int ss)
//	{
//		sal = ss;
//	}
//	int set3()
//	{
//		return sal;
//	}
//	int incrementsalary(int ss2)
//	{
//		sal = ss2 + (ss2 * 0.1);
//		return sal;
//	}
//	
//
//};
//int main()
//{
//	employee emp1;
//	emp1.setname("ali");
//	emp1.setname2("ahmad");
//	emp1.setsal(100);
//	cout << "Employee 1 data :" << endl;
// cout<<" first name :"<<emp1.set1()<<endl;
// cout<<	"Last name :"<<emp1.set2()<<endl;
// cout<< "salary :"<<emp1.set3()<<endl;
//
// employee emp2;
// emp2.setname("aun");
// emp2.setname2("ali");
// emp2.setsal(200);
// cout << "Employee 2 data :" << endl;
// cout << " first name :" << emp2.set1() << endl;
// cout << "Last name :" << emp2.set2() << endl;
// cout << "salary :" << emp2.set3() << endl;
// cout << "Employe 1 incremented salary" << endl;
// cout<< emp1.incrementsalary(100)<<endl;
// cout << "Employe 2 incremented salary" << endl;
// cout << emp2.incrementsalary(200) << endl;
//
//	return 0;
//}