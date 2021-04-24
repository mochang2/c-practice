#include <iostream>

using namespace std;

class Course
{
public:
	int Id;
	const char* Instructor = new char[100];
	int RoomNr;
	Course();
	Course(int, const char*, int);
	Course& operator=(const Course& cour)
	{
		if (this != &cour)
		{
			delete[] Instructor;
			Id = cour.Id;
			Instructor = cour.Instructor;
			RoomNr = cour.RoomNr;
		}
		return *this;
	}
};
Course::Course()
{
	//cout << "course()" << endl;
	this->Id = 0;
	this->Instructor = "";
	this->RoomNr = 0;
}
Course::Course(int Id, const char* Instructor, int RoomNr)
{
	//cout << "course(int, const char* int)" << endl;
	this->Id = Id;
	this->Instructor = Instructor;
	this->RoomNr = RoomNr;
}

class Student
{
private:
	const char* Name;
	int Number;
	Course* Courses;
public:
	int Course_count;
	Student();
	//Student(const char*, int, Course*);
	void setName(const char*);
	const char* getName();
	void setNumber(int);
	int getNumber();
	void setCourses(Course);
	//Course* getCourses();
	Course getCourses(int index)
	{
		return Courses[index];
	}
};
Student::Student()
{
	Name = new const char[100];
	Number = 0;
	Courses = new Course[10];
	Course_count = 0;
}
//Student::Student(const char* Name, int Number, Course* Courses)
//{
//	//cout << "student" << endl;
//	this->Name = Name;
//	this->Number = Number;
//	this->Courses = Courses;
//}
void Student::setName(const char* Name)
{
	this->Name = Name;
}
const char* Student::getName()
{
	return Name;
}
void Student::setNumber(int)
{
	this->Number = Number;
}
int Student::getNumber()
{
	return Number;
}
void Student::setCourses(Course courses)
{
	Courses[Course_count] = courses;
	Course_count++;
}
//Course* Student::getCourses()
//{
//	return Courses;
//}


int main()
{
	/* Q5.Using the above two classes 
	create a simple application that allows 
	the assignment of students to courses 
	(using the Courses attribute of the class Student). 
	Your application should internally store a sequence 
	of Student objects either by using an array or 
	by using a linked list. */
	Course arrayCourse[3] = { {1, "Kutzner", 101},
	{2, "Kutzner",201},{3,"Kutzner",301} };
	//~~blabla


	/* Q6
	이 두 문제 하려면 코드를 꽤 많이 바꿔야 하므로
	여기까지만 쓰고 다른 코드를 내겠음*/



	return 0;
}