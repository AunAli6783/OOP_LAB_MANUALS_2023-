//#include <iostream>
//using namespace std;
//class person
//{
//private:
//	string firstname;
//	string lastname;
//protected:
//	int age;
//public:
//	void setage(int a)
//	{
//		age = a;
//	}
//	void setfirst(string s)
//	{
//		firstname = s;
//	}
//	void setlast(string l)
//	{
//		lastname = l;
//	}
//	string getfirst()
//	{
//		return firstname;
//	}
//	string getlast()
//	{
//		return lastname;
//	}
//
//};
//class undergraduate:public person
//{
//private:
//	int cgpa;
//	int rollnumber;
//	string fyp;
//	string super;
//public:
//	int getage()
//	{
//		return age;
//	}
//	void setgpa(int g)
//	{
//		cgpa = g;
//	}
//	int getgpa()
//	{
//	 return cgpa ;
//	}
//	void setfpy(string f)
//	{
//		fyp = f;
//	}
//	void setroll(int a)
//	{
//		rollnumber = a;
//	}
//	void setsupervisor(string s)
//	{
//		super = s;
//	}
//	string getsupervisor()
//	{
//		return super;
//	}
//	int getroll()
//	{
//		return rollnumber;
//	}
//	string getfyp()
//	{
//		return fyp;
//	}
//};
//class graduate : public undergraduate
//{
//private:
//	int rol;
//	int gpa;
//	string thesis;
//	string super2;
//public:
//	int getage()
//	{
//		return age;
//	}
//	void setgpa(int g)
//	{
//		gpa = g;
//	}
//	int getgpa()
//	{
//		return gpa;
//	}
//	void setthesis(string the)
//	{
//		thesis = the;
//	}
//	string getthesis()
//	{
//		return thesis;
//	}
//	void setsuper2(string sup)
//	{
//		super2 = sup;
//	}
//	string getsuper2()
//	{
//		return super2;
//	}
//};
//
//class faculty: public person
//{
//private:
//	int numberofcourse;
//	int telephone;
//public:
//	faculty() :numberofcourse(0), telephone(0) {}
//	void setage(int a)
//	{
//		age = a;
//	}
//	void  setcount(int c)
//	{
//		numberofcourse = c;
//	}
//	void setextension(int e)
//	{
//		telephone = e;
//	}
//	int getage()
//	{
//		return age;
//	}
//	int getcount()
//	{
//		return numberofcourse;
//
//	}
//};
//int main()
//{
//	undergraduate p;
//	p.setfirst("Aun");
//	p.setlast("Ali");
//	p.setage(10);
//	p.setgpa(2);
//	p.setfpy("ganda anda");
//	p.setsupervisor("hamza gondal");
//	p.setroll(6783);
//
//	cout << "The name of person:" << p.getfirst() << " ";
//	cout << p.getlast() << endl;
//	cout<<"The age of person:" << p.getage() << endl;
//	cout << "The gpa of person:" << p.getgpa() << endl;
//	cout << "The fyp of person:" << p.getfyp() << endl;
//	cout << "The roll number of person:" << p.getroll() << endl;
//	cout << "The supervisor is " << p.getsupervisor() << endl;
//
//	cout << endl;
//   graduate g;
//	g.setfirst("Aun");
//	g.setlast("Ali");
//	g.setage(10);
//	g.setgpa(2);
//	g.setthesis("phata ghubara");
//	g.setsuper2("majnou khan");
//	g.setroll(6783);
//
//	cout << "The name of person:" << g.getfirst() << " ";
//	cout << g.getlast() << endl;
//	cout << "The age of person:" << g.getage() << endl;
//	cout << "The gpa of person:" << g.getgpa() << endl;
//	cout << "The thesis of person:" << g.getthesis() << endl;
//	cout << "The roll number of person:" << g.getroll() << endl;
//	cout << "The supervisor is " << g.getsuper2() << endl;
//	cout << endl;
//	faculty f;
//	f.setfirst("Aun");
//	f.setlast("Ali");
//	f.setage(10);
//	f.setcount(3);
//	f.setextension(020);
//
//	cout << "The name of person:" << f.getfirst() << " ";
//	cout << f.getlast() << endl;
//	cout << "The age of person:" << f.getage() << endl;
//	cout << "The gpa of person:" << f.getcount() << endl;
//	
//	return 0;
//}