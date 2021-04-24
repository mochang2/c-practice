#include <iostream>

using namespace std;
#define PI 3.141592;

class Circle	//Circle is now a datatype!
{	//default: private
public:
	double radius;
	double area(); //method prototype
	//{ return radius * radius * PI; }
};
double Circle::area()	//method definition
{
	return radius * radius * PI;
}
struct Rec
{	//classic C structure
	int field;
	int another;
};

class Circle2 
{
public:
	int i;
	double radius;
	void area()
	{
		for (int i = 0; i < Circle2::i; i++)
		{
			cout << i << endl;
			radius = i;
			cout << radius * radius * PI;
			cout << "\n";
		}
	}
};

class Circle3
{
	double radius;	//private
public:
	void setradius(double r)
	{
		radius = (r < 0) ? 0 : r;
	}
	double getradius()
	{
		return radius;	//밖에서는 radius를 바로 접근 못하므로
	}
	double area()
	{
		return radius * radius * PI;
	}
};

class Circle4
{
public:
	double radius;
	//radius가 private이고 const붙으면 read only!
	Circle4()
	{	//default constructor
		radius = 20.0;
	}
	Circle4(double r)
	{	//parameterized constructor
		radius = r > 0 ? r : 0;
	}
	~Circle4()	//no parameter
	{
		cout << "Goodbye Object with radius " << radius << endl;
	}
	double area()
	{
		return radius * radius * PI;
	}
};

int main()
{
	//Circle c1 = { 4/*, 5, "chang"*/ };
	////c1.radius = 5;
	//Circle c2;
	//c2.radius = 13;
	//Circle c3;
	//c3.radius = 7;
	////Circle c1, c2, c3
	//cout << c1.area() << endl;

	//Rec instance = { 4, 7 };
	//cout << instance.field << " " 
	//	<< instance.another << endl;


	/*Circle2 object1;
	object1.i = 10;
	object1.area();*/


	/*Circle3 object3;
	object3.setradius(4);
	cout << "\n" << object3.area() << endl;*/


	/*Circle4 object4;
	cout << object4.radius << endl;
	//object4.~Circle4();
	
	{
		Circle4 object5(15.0);
		cout << object5.radius << endl;
	}
	//cout << object5.radius << endl; //error */


	return 0;
}
