#include <iostream>
using namespace std;
/* basic */
//class Circle
//{
//private:
//	static int count;	//static attribute
//	//only declaration, not a definition
//public:
//	double radius;	// (instance) attribute
//	Circle()
//	{
//		count++;
//		this->radius = 0.0f;
//	}
//	Circle(double radius) 
//	{ 
//		count++;
//		this->radius = radius;
//		//Circle::radius = radius;
//		//(*this).radius = radius;	순서상 괄호 필요
//	}
//	static int getcount()
//	{
//		return count;
//	}
//};
//int Circle::count = 0;
//
//int main()
//{
//	Circle c1=Circle(5.0); Circle c2 = Circle();
//	//Circle c1(5); Circle c2;
//	cout << Circle::getcount() << endl;
//
//	return 0;
//}

/* friend function */
//class Circle
//{
//private:
//	static int count;
//public:
//	double radius;
//	Circle()
//	{
//		count++;
//		this->radius = 0.0f;
//	}
//	Circle(double radius) 
//	{ 
//		count++;
//		this->radius = radius;
//	}
//	friend void printcount();
//	//void friend printcount(); 가능
//};
//int Circle::count = 0;
//
//void printcount()
//{
//	cout << Circle::count<< endl;
//	//class 밖이지만 Circle class의 private 접근 가능
//}
//
//int main()
//{
//	Circle c1(5); Circle c2;
//	printcount();
//
//	return 0;
//}

/* static method, friend class */
//class Circle
//{
//private:
//	static int count;
//public:
//	double radius;
//	Circle()
//	{
//		count++;
//		this->radius = 0.0f;
//	}
//	Circle(double radius)
//	{
//		count++;
//		this->radius = radius;
//	}
//	friend class someclass;
//	//class friend someclass//는 안됨
//};
//int Circle::count = 0;
//class someclass
//{
//public:
//	static void printcount()
//	{
//		cout << Circle::count << endl;
////class 밖이지만 Circle class의 private 접근 가능
//	}
//};
//
//int main()
//{
//	Circle c1(5); Circle c2; Circle c3(10.0);
//	someclass::printcount();
//	//정의할 때 static 안 붙이면 함수 실행이 안됨.
//
//	return 0;
//}

/* operator */
//class Circle
//{
//private:
//	Circle operator+(double d)
//	{
//		return Circle(this->radius + d);
//	}
//public:
//	double radius;
//	Circle()
//	{
//		this->radius = 0.0f;
//	}
//	Circle(double radius)
//	{
//		this->radius = radius;
//	}
//	//Circle add(Circle& c)
//	Circle operator+(Circle& c)
//	{
//		return Circle(this->radius + c.radius);
//	}
//	friend int main();	//이런 방법이 있지만 하지마!
//};
//
//int main()
//{
//	Circle c1(5); Circle c2(10);
//	Circle c3 = c1 + c2;
//	//Circle c3 = c1.add(c2);
//	cout << c3.radius << endl;
//
//	Circle c4 = c3 + 6.0f;
//	//Circle c5 = 5.0 + c4;	//error->double+Circle 필요
//	
//	return 0;
//}

/* operator + */
//class Circle
//{
//	//double radius;
//public:
//	double radius;
//	Circle()
//	{
//		this->radius = 0.0f;
//	}
//	Circle(double radius)
//	{
//		this->radius = radius;
//	}
//	//Circle add(Circle& c)
//	Circle operator+(Circle& c)
//	{
//		return Circle(this->radius + c.radius);
//	}
//	Circle operator+(double d)
//	{
//		return Circle(this->radius + d);
//	}
//	friend Circle operator+(double, Circle&);
//};
//Circle operator+(double d, Circle& c)
//{
//	return Circle(d + c.radius);
//	//전역 함수냐 멤버 함수냐 구분! radius 가 private일때
//}
//
//int main()
//{
//	Circle c1(5); Circle c2(10);
//	Circle c3 = c1 + c2;
//	//Circle c3 = c1.add(c2);
//	cout << c3.radius << endl;
//
//	Circle c4 = c3 + 6.0f;
//	Circle c5 = 1.0f + c4;
//	cout << c5.radius << endl;
//	
//	return 0;
//}

/* operator << */
//class Circle
//{
//private:
//	double radius;
//public:
//	//double radius;
//	Circle()
//	{
//		this->radius = 0.0f;
//	}
//	Circle(double radius)
//	{
//		this->radius = radius;
//	}
//	friend ostream& operator<<(ostream&, Circle&);
//	friend Circle operator+(double, Circle&);
//};
//std::ostream & operator <<(std::ostream& o, Circle& c)
//{
//	o << c.radius;
//	//object copy를 막을 수 있음-outputstream
//	return o;
//}
//Circle operator+(double d, Circle& c)
//{
//	return Circle(d + c.radius);
//}
//int main()
//{
//	Circle c1(5); Circle c2(10);
//	Circle c3 = 6.0f + c1;
//	cout << c3 << endl;
//	
//	return 0;
//}

/* friend 없이 << overload */
//class Point
//{
//private:
//	int x, y;
//public:
//	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
//	ostream& operator<<(ostream& o)
//	{
//		o << "x " << this->x << " y " << this->y << endl;
//		return o;
//	}
//};
//
//int main()
//{
//	Point p(1, 3);
//	p.operator<<(cout);
//
//	return 0;
//}
/* 하지만 이것보단 전역변수에 의한 오버로딩이 좋은듯 */

/* operator <<. >>*/
//class Student
//{
//	friend istream& operator>>(istream& in, Student& stu)
//	{
//		cout << "student name : ";
//		in >> stu.Name;
//		cout << "student number : ";
//		in >> stu.Number;
//		return in;
//	}
//	friend ostream& operator<<(ostream& out, Student& stu)
//	{
//		out << "Student Name : " << stu.Name << "\n"
//			<< "Student Number : " << stu.Number << endl;
//		return out;
//	}
//public:
//	string getName() const { return Name; }
//	int getNumber() const { return Number; }
//private:
//	string Name;
//	int Number;
//};
////ostream 을 밖에다 정의하면 friend 필요없지만
////private 에 접근을 못하게 됨
//
//int main()
//{
//	Student stu1;
//	cout << "input Student Name and Number\n";
//	cin >> stu1;
//	cout << stu1;
//}

/* inheritance */
//class Circle	//superclass
//{
//public:
//	double radius;
//	Circle() { this->radius = 0.0f; }
//	Circle(double radius){ this->radius = radius; }
//	double area() { return radius * radius * 3.14; }
//};
//class Cylinder/*subclass*/ :public Circle
//{
//public:
//	double height;
//	double volume() { return Circle::area() * height; }
//	double area()
//	{
//		return 2 * Circle::area()
//			+ 2 * radius * 3.14 * height;
//	}
//};
//
//int main()
//{
//	Circle c1(5); Circle c2(10);
//	
//	return 0;
//}