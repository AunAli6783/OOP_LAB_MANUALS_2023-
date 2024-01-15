//#include<iostream>
//using namespace std;
//class Shape 
//{
//	float h;
//	float l;
//
//public:
//	virtual double calculateArea()
//	{
//		return l * h;
//	}
//	virtual double calculateparameter()
//	{
//		return 2 * (l + h);
//	}
//};
//class Rectangle: public Shape {
//public:
//	float height;
//	float width;
//public:
//	//default constructor
//	Rectangle() {
//
//	}
//	//parametrizes constructor
//	Rectangle(int height, int width)
//	{
//		this->height = height;
//		this->width = width;
//	}
//	double calculateArea()
//	{
//		return height * width;
//	}
//	double calculateparameter()
//	{
//		return 2 * (height + width);
//	}
//};
//class Circle :public Shape
//{
//public:
//
//	float radius{ 0 };
//
//
//	Circle()
//	{
//		radius = 0;
//	}
//	//parameterized constructor
//	Circle(int radius)
//	{
//		this ->radius = radius;
//	}
//	double calculateArea()
//	{
//		float area;
//		area = radius * radius;
//		
//		area = area * 3.1416;
//		return area;
//
//	}
//	double calculateparameter()
//	{
//		return 2 * 3.1416* radius;
//
//	}
//};
//class Square:public Rectangle,public Circle 
//{
//	Rectangle rectangle;
//	Circle circle;
//	float side = height = radius;
//public:
//	Square(){}
//
//	Square(float side)
//	{
//		this->side = side;
//
//	}
//	double calculateArea()
//	{
//		return rectangle.calculateArea() + circle.calculateArea();
//	}
//	double calculateparameter()
//	{
//		return rectangle.calculateparameter() + circle.calculateparameter();
//	}
//};
//int main()
//{
//	
//		Shape* rectangle = new Rectangle(10, 20);
//		Shape* circle = new Circle(5);
//		
//		cout << "Rctangle  Area:" << rectangle->calculateArea() << ", Parameter:" << rectangle->calculateparameter() << endl;
//		cout << "Circle  area" << circle->calculateArea() << ", Parameter:" << circle->calculateparameter() << endl;
//		
//	
//		delete rectangle;
//		delete circle;
//
//		return 0;
//}