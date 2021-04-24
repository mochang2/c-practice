#include <iostream>
#include <string>
//010-2250-6188 ta phone num
using namespace std;

class Time
{
public:
	int hour, min;
	void ShowTime()
	{
		cout << "Now " << hour << ":" << min
			<< " p.m" << endl;
	}
};

class Car
{
public:
	int speed;
	int gear;
	string color;

	void speedUp() { speed += 10; }
	void speedDown() { speed -= 10; }

	void show()
	{
		cout << "==================" << endl;
		cout << "SPEED : " << speed << endl;
		cout << "GEAR : " << gear << endl;
		cout << "COLOR : " << color << endl;
		cout << "==================" << endl;
	}
};

class Circle
{
public:
	double radius;
	double area();
	Circle(double r);
	Circle();
	~Circle();
};
Circle::Circle(double r)
{
	radius = r;
}
Circle::Circle()
{
	radius = 0.0f;
}
double Circle::area()
{
	return radius * radius * 3.141592;
}
Circle::~Circle()
{
	cout << "Goodbye Object\n";
}

class Student
{
public:
	string name, id, major;
	Student();
	Student(const char*, const char*, const char*);
	void show();
};
Student::Student()
{
	name = "";
	id = "";
	major = "";
}
Student::Student(const char* n, const char* i,
	const char* m)
{
	name = n;
	id = i;
	major = m;
}
void Student::show()
{
	cout << "Student name: " << name << endl;
	cout << "Student id: " << id << endl;
	cout << "Major: " << major << endl;
}

int main()
{
	/*Time Now = { 10,25 };
	Now.ShowTime();*/


	/*Car myCar, yourCar;
	myCar.speed = 100;
	myCar.color = "red";
	myCar.gear = 3;
	yourCar.speed = 10;
	yourCar.color = "blue";
	yourCar.gear = 1;

	myCar.speedUp();
	yourCar.speedDown();
	myCar.show();
	yourCar.show();*/


	/*Circle c = Circle(5.0);
	cout << c.area() << endl;*/


	/* Exercise */
	/*Student object1, object2;
	object1.name = "Hong";
	object1.id = "20161111";
	object1.major = "Computer Engineering";

	object2.name = "Koo";
	object2.id = "20162222";
	object2.major = "Computer Science";

	object1.show();
	cout << "\n";
	object2.show();*/


	/*Student object3 = Student("Hong", "20161111",
		"Computer Engineering");
	object3.show();

	cout << "\n";
	Student object4;// = Student();
	object4.show();*/

	return 0;
}
