//#include <iostream>
//#include<cstring>
//#include <string>
//using namespace std;
//
//class stri
//{
//	int lenght;
//	char *str=new char[5];
//public:
//	stri() {
//		lenght = 0;
//	
//	}
//	/*stri(){
//		lenght = 0;
//			for (int i = 0; i < lenght; i++)
//			{
//				str[i] = '/0';
//			}
//	}*/
//	/*stri(int count)
//	{
//		lenght = count;
//		for (int i = 0; i < lenght; i++)
//		{
//			str[i] = '/0';
//		}
//	}*/
//	void setlenght(int l)
//	{
//		lenght = l;
//	}
//	stri(stri &s)
//	{
//		stri d;
//		d.lenght = lenght;
//		d.str = str;
//
//	}
//	void setstr( char s[])
//	{
//		for (int i = 0; i < lenght; i++)
//		{
//			str[i] = s[i];
//	  }
//	}
//	char* getstr()
//	{
//		return str;
//	}
//	int getlenght()
//	{
//		return lenght;
//	}
//	void print()
//	{
//		cout << "The lenght : " << lenght << endl;
//		cout << "The string is: ";
//		for (int i = 0; i < lenght; i++)
//		{
//			cout << str[i];
//		}
//		cout << endl;
//	}
//	bool operator==(const stri & a)
//	{
//		int i = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			if (str[i] == a.str[i])
//			{
//				i++;
//			}
//			else
//				return 0;
//		}
//		if (i == 4)
//		{
//			return 1;
//		}
//
//		
//	}
//	stri operator++(int)
//	{ 
//		cout << "The incrementor is called:" << endl;
//		stri ss;
//		ss.str[4]=++str[4];
//		
//		return ss;
//	}
//	stri operator--(int)
//	{
//		cout << "The decrementor  is called:" << endl;
//		stri se;
//		se.str[4] = --str[4];
//
//		return se;
//	}
//	stri operator+(stri &a)
//	{
//		cout << "the concatenate is called" << endl;
//		
//		stri temp;
//		strcpy(temp.str, str);
//		strcat(temp.str, a.str);
//		return temp;
//	  
//	}
//};
//int main()
//{
//	stri s;
//	char a[100] = {};
//	cout<< "Enter the character" << endl;
//cin.getline(a, 50);
//	
//	s.setlenght(5);
//	s.setstr(a);
//	s.print();
//	stri s2;
//	s2=s;
//	if (s2 == s)
//	{
//		cout << "Equal" << endl;
//	}
//	s++;
//	s.print();
//	s2--;
//	s2--;
//	s.print();
//	char b[10];
//	cout << "Enter the other character for cascading" << endl;
//	cin.getline(b, 5);
//	char z[10] = {};
//	stri s3;
//	s3.setstr(b);
//	stri s4;
//	s4 = s + s3;
//	//z=s3 + s;
//	s4.setlenght(10);
//	s4.print();
//	
//	return 0;
//}