//#include <iostream>
//#include <cmath>
//using namespace std;
//class vector
//{
//private:
//	double x;
//	double y;
//	double z;
//public:
//	vector(double xcoor, double ycoor, double zcoor)
//	{
//		x = xcoor;
//		y = ycoor;
//		z = zcoor;
//	}
//	double getx()
//	{
//		return x;
//	}
//	double gety()
//	{
//		return y;
//	}
//	double getz()
//	{
//		return z;
//	}
//	vector add(vector v)
//	{
//		double ax, ay, az;
//		return
//		{
//		 	ax=x + v.getx(),
//			ay=y + v.gety(),
//			az=z + v.getz()
//		
//		};
//	}
//	double dotproduct(vector v)
//	{
//		double dp;
//		return
//		{
//			dp=(x * (v.getx())) + (y * (v.gety())) + (z * (v.getz()))
//		};
//	}
//	double computemagnitude()
//	{
//		double k,l,m,sum;
//		k = x*(x);
//		m = y * (y);
//		l = z * (z);
//		sum = k + l + m;
//		return sqrt(sum);
//	}
//    vector projectonto(vector v)
//	{
//		// magnitude of u
//		double k, l, m, sum;
//		k = x * (x);
//		m = y * (y);
//		l = z * (z);
//		sum = k + l + m;
//		double sq= sqrt(sum);
//
//		// dot product
//		double dp = (x * (v.getx())) + (y * (v.gety())) + (z * (v.getz()));
//		// magnitude of v
//		double a, b, c, d;
//		a = v.getx() * (v.getx());
//		b=v.gety()* (v.gety());
//		c= v.getz() * (v.getz());
//		d = a + b + c;
//		double e = sqrt(d);
//
//
//		double mul = sq*e;
//
//			double div = dp/mul;
//
//			double  px, py, pz;
//			px = div * x;
//			py = div * y;
//			pz = div * z;
//			return {
//				px,py,pz
//			};
//
//	}
//};
//int main()
//{
//	double x1, y1, z1;
//	double x2, y2, z2;
//	cout << "Enter x for v1" << endl;
//	cin >> x1;
//	cout << "Enter y for v1" << endl;
//	cin >> y1;
//	cout << "Enter z for v1" << endl;
//	cin >> z1;
//	cout << "Enter x for v2" << endl;
//	cin >> x2;
//	cout << "Enter y for v2" << endl;
//	cin >> y2;
//	cout << "Enter z for v2" << endl;
//	cin >> z2;
//	vector v1(x1, y1, z1);
//	vector v2(x2, y2, z2);	
//	vector v3 = v1.add(v2);
//	double z=v1.dotproduct(v2);
//	cout << z << endl;
//	cout << "Dot Products:" << endl;
//	cout << v3.getx() << endl;
//	cout << v3.gety() << endl;
//	cout << v3.getz() << endl;
//	double magnitude = v1.computemagnitude();
//	cout << "Magnitude" << endl;
//	cout << magnitude << endl;
//	double m2 = v2.computemagnitude();
//	cout << m2 << endl;
//	vector v4 = v1.projectonto(v2);
//	cout << "Projection :" << endl;
//	cout << v4.getx() << endl;
//	cout << v4.gety() << endl;
//	cout << v4.getz() << endl;
//	return 0;
//}