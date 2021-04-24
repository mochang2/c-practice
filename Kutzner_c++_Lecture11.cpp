#include <iostream>
using namespace std;

//class Circle
//{
//public:
//	double radius;	//instance attribute
//	double area()
//	{
//		return radius * radius * 3.141592;
//	}
//	Circle()
//	{
//		radius = 0;
//	}
//	Circle(double radius)
//	{
//		this->radius = radius > 0 ? radius : 0;
//	}
//};
//class Cylinder : public Circle
//{
//public:
//	Cylinder(double radius, double height):Circle(radius)
//	{	//superclass constructor
//		//this->radius = radius;
//		this->height = height > 0 ? height : 0;
//	}
//	double height;	//additional attribute
//	double volume()	//additional method
//	{
//		return Circle::area() * height;
//	}
//	double area()
//	{
//		return 2 * Circle::area() 
//			+ 2 * 3.141592 * radius * height;
//	}
//};

//class Circle
//{
//public:
//	double radius;	//instance attribute
//	double area()
//	{
//		return radius * radius * 3.141592;
//	}
//	Circle()
//	{	//default constructor
//		cout << "Circle" << endl;
//		radius = 5.0f; 
//	}
//	Circle(double radius)
//	{
//		this->radius = radius > 0 ? radius : 0;
//	}
//};
//class Cylinder : public Circle
//{
//public:
//	Cylinder(double radius, double height)
//	{
//		//this->radius = radius;
//		this->height = height > 0 ? height : 0;
//	}
//	double height;	//additional attribute
//	double volume()	//additional method
//	{
//		return Circle::area() * height;
//	}
//	double area()
//	{
//		return 2 * Circle::area()
//			+ 2 * 3.141592 * radius * height;
//	}
//};

//class A
//{
//public:
//	int attr_pub;
//protected:
//	int attr_prot;
//private:
//	int attr_priv;
//};
//class B : public A
//{
//public:
//	void method_pub() 
//	{
//		cout << attr_pub << endl; 
//	}
//	//void method_pri() 
//	//{ 
//		//cout << attr_priv <<endl; 
//	//}
//	void method_prot() 
//	{ 
//		cout << attr_prot << endl; 
//	}
//
//	A obj_a;
//	/*void method_obj_a() 
//	{
//		cout << obj_a.attr_prot << endl; 
//	}*/
//	B* obj_b;
//	void method_obj_b()
//	{
//		cout << obj_b->attr_prot << endl;
//	}
//};
//class C
//{
//public:
//	A obj_a;
//	void method_pub() 
//	{ 
//		cout << obj_a.attr_pub << endl; 
//	}
//	/*void method_prot() 
//	{ 
//		cout << obj_a.attr_proc << endl; 
//	}*/
//	/*void method_priv()
//	{
//		cout << obj_a.attr_priv << endl;
//	}*/
//};

 /*multi inheriance 절대 사용 하지마!*/
//class D
//{
//public:
//	int attr_pubD;
//};
//class A :public D
//{
//public: 
//	int attr_pubA;
//};
//class B :public D
//{
//public:
//	int attr_pubB;
//};
//class C :public A, public B
//{
//public:
//	void method() 
//	{
//		cout << attr_pubA << endl;
//		cout << attr_pubB << endl;
//		cout << attr_pubD << endl;
//		namespace 사용하면 해결되는데 그래도 다른
//		무언가의 문제가 생길 가능성 있음
//	}
//};

//class A
//{
//public: 
//	int attr_pubA = 0;
//	virtual int method()
//	{
//		cout << "A_method()" << endl;
//		return 5;
//	}
//	//A aa;
//};
//class B : public A
//{
//public:
//	int attr_pubB = 0;
//	virtual int method()
//	{
//		cout << "B_method()" << endl;
//		return 6;
//	}
//	//B bb; //error B* 만 가능
//};
//class C :public B
//{
//	int attr_pubC = 0;
//	virtual int method()
//	{
//		cout << "C_method()" << endl;
//		return 7;
//	}
//};
//class D :public C {};
//void func()
//{
//	A* p_obj_a = new A;
//}

int main()
{
	/* 1번째 */

	/* 2번째 주석 사용할 때 */
	//Cylinder cyl(3.0, 4.0);
	//cout << cyl.radius << endl;	//5.0

	//Circle c2;//not error
	///*after // on Circle() constructor*/ Circle c3; //error
	///*after all constructor //*/ Circle c4; //not error

	/* 3번째 */

	/* 4번째 */

	/* 5번째 */
	/*A* p_obj_a = new A;
	p_obj_a->attr_pubA = 8;

	delete p_obj_a;

	func();	//이런 식으로 사용하면 memery leak 발생
	//smart pointer 사용하면 누수 없이 가능함

	A* p_obj_aa = new B;
	//polymorphism works only in pointers
	p_obj_aa->method();	//A::method();
	//virtual 을 사용하면?

	//B* p_obj_bb = new A; //error

	A* p_obj_123 = new D;
	p_obj_123->method();*/

	return 0;
}