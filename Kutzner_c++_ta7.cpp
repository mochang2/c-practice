#include <iostream>
using namespace std;

/* friend */
//class AAA 
//{
//private:
//	int val;
//	friend class BBB;
//	friend void set(AAA&,int x);
//};
//class BBB
//{
//public:
//	void Set(AAA& aaa, int x)
//	{
//		aaa.val = x;
//		cout << aaa.val << endl;
//	}
//};
//void set(AAA& xxx, int x)
//{
//	xxx.val = x;
//	cout << xxx.val << endl;
//}

/* inheritance */
//class Parent
//{
//private:
//	int m_a, m_b;
//public:
//	Parent(int a = 0, int b = 0)
//	{
//		m_a = a;
//		m_b = b;
//	}
//	void printnum()
//	{
//		cout << "a : " << m_a << " b : " 
//			<< m_b << endl;
//	}
//};
//class Child :public Parent
//{
//private:
//	char m_c;
//public:
//	Child(int a = 0, int b = 0, char c = NULL):Parent(a, b)
//	{
//		m_c = c;
//	}
//	void printchar()
//	{
//		cout << "character : " << m_c << endl;
//	}
//};

/* method overriding */
//class Circle {
//protected:
//	double radius;
//public:
//	double area();
//};
//double Circle::area()
//{
//	return radius * radius * 3.141592;
//}
//
//class Cylinder :public Circle
//{
//private:
//	double height;
//public:
//	double volume();
//	double area();
//	Cylinder(double r, double h);
//};
//Cylinder::Cylinder(double r, double h)
//{
//	radius = r;
//	height = h;
//}
//double Cylinder::volume()
//{
//	return Circle::area() * height;
//}
//double Cylinder::area()
//{
//	return Circle::area() * 2 + 2 * radius * 3.141592;
//}

/* overriding & overloading */
//class A
//{
//public:
//	void cacao()
//	{
//		cout << "void A::cacao()" << endl;
//	}
//	int cacao(int a)
//	{
//		cout << "int A::cacao(int a)" << endl;
//		return a;
//	}
//};
//class B :public A
//{
//public:
//	int cacao(int a, int b)
//	{
//		cout << "int B::cacao(int a, int b)" << endl;
//		return a;
//	}
//};

int main()
{
	/* friend */
	/*AAA aaa, ccc;
	BBB bbb;
	bbb.Set(aaa, 10);
	set(ccc, 20);*/


	/* inheritance */
	/*Parent Par;	//Parent Par(2, 3);
	Par.printnum();
	Child Chi(4, 5, 'z');
	Chi.printchar();
	Chi.printnum();*/


	/* overriding */
	/*Cylinder c(10, 5);
	cout << c.area() << endl;
	cout << c.volume() << endl;
	cout << 3.141592 * 10 * 10 * 5 << endl;*/


	/* overriding & overloading */
	/*A a;
	a.cacao();
	a.cacao(3);

	B b;
	b.cacao(1, 2);
	//b.cacao(5);*/

	return 0;
}