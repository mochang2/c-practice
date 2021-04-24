#include <iostream>
using namespace std;

//class Course
//{	/* Q d*/
//public:
//	int Id;
//	const char* Instructor;
//	int RoomNr;
//};
//class Student
//{	/* Q a*/
//private: 
//	const char* Name;
//	int Number;
//	Course* Courses;
//public:
//	int Course_count;
//	Student()
//	{	/* Q b*/
//		Name = new const char[100];
//		Number = 0;
//		Courses = new Course[10];
//		Course_count = 0;
//	}	/* Q c*/
//	void SetName(const char* pName)
//	{
//		Name = pName;
//	}
//	const char* GetName()
//	{
//		return Name;
//	}
//	void SetNumber(int i)
//	{
//		Number = i;
//	}
//	int GetNumber()
//	{
//		return Number;
//	}
//	void SetCourse(Course cour)
//	{
//		Courses[Course_count] = cour;
//		Course_count++;
//	}
//	Course GetCourses(int index)
//	{
//		return Courses[index];
//	}
//};
//
//void PrintCourseInfo(int, Student [], int);
//
//int main()
//{
//	/* Q e */
//	Course ArrayCourse[3];
//	for (int i = 1; i <= 3; i++)
//	{
//		ArrayCourse[i - 1].Id = i;
//		ArrayCourse[i - 1].RoomNr = 100 + i;
//		ArrayCourse[i - 1].Instructor = "Kutzner";
//	}
//
//	Student ArrayStudent[3];
//	for (int i = 0; i < 3; i++)
//	{
//		ArrayStudent[i].SetNumber(20161111 + i);
//	}
//	ArrayStudent[0].SetName("Charlie");
//	ArrayStudent[1].SetName("Alex");
//	ArrayStudent[2].SetName("Jaemin");
//
//	ArrayStudent[0].SetCourse(ArrayCourse[0]);
//	ArrayStudent[0].SetCourse(ArrayCourse[1]);
//	ArrayStudent[0].SetCourse(ArrayCourse[2]);
//
//	ArrayStudent[1].SetCourse(ArrayCourse[1]);
//	ArrayStudent[1].SetCourse(ArrayCourse[2]);
//
//	ArrayStudent[2].SetCourse(ArrayCourse[0]);
//	ArrayStudent[2].SetCourse(ArrayCourse[2]);
//
//
//	/* Q f */
//	PrintCourseInfo(2, ArrayStudent, 3);
//	PrintCourseInfo(1, ArrayStudent, 3);
//
//
//	return 0;
//}
//
//void PrintCourseInfo(int CourseId, Student ArrayStudent[],int StudentSize)
//{
//	cout << "Course_ID : " << CourseId << endl;
//
//	for (int i = 0; i < StudentSize; i++)
//		for (int j = 0; j < ArrayStudent[i].Course_count; j++)
//			if (CourseId == (ArrayStudent[i].GetCourses(j)).Id)
//				cout << ArrayStudent[i].GetName() << ", "
//				<< ArrayStudent[i].GetNumber() << endl;
//}


/* solution */
//void stringCopy(char* dest, const char* src)
//{
//	while (*src != 0)
//		*dest++ = *src++;
//	*dest = '\0';
//} 
//
//class Course {
//public:
//	int Id; // Course Id
//	char Instructor[100]; // Name of Instructor
//	int RoomNr; // Room number
//
//	Course() {
//		this->reset();
//	} 
//
//	void reset(void)
//	{
//		this->Id = 0;
//		this->Instructor[0] = '\0'; // creates empty string
//		this->RoomNr = 0;
//	} 
//}; 
//
//class Student {
//private: // problem b)
//	char Name[100]; // Name of student
//	int Number;  // Number of student
//	int Courses[10]; // Courses booked by student. We use the course Id (type int) over here! 
//
//public:
//	Student()
//	{
//		Number = 0;
//		Name[0] = '\0';
//		for (int i = 0; i < 10; i++)
//			Courses[i] = 0;
//	} 
//
//	Student(int IntialNumber,
//		const char* InitialName)
//	{
//		Number = IntialNumber;
//		this->setName(InitialName);
//		for (int i = 0; i < 10; i++)
//			Courses[i] = 0;
//	} 
//
//	int getNumber(void)
//	{
//		return this->Number;
//	} 
//
//	void setNumber(int NewNumber)
//	{
//		this->Number = NewNumber;
//	} 
//
//	char* getName(void)
//	{
//		return this->Name;
//	} 
//
//	void setName(const char* NewName)
//	{
//		stringCopy(this->Name, NewName);
//	} 
//
//	int getCourse(int Index)
//	{
//		return Courses[Index];
//	} 
//
//	void setCourse(int Index, int courseId)
//	{
//		this->Courses[Index] = courseId;
//	} 
//
//	void addCourse(int courseId)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (Courses[i] == 0)
//				Courses[i] = courseId;
//		} 
//	} 
//
//	// checks wether for course visit
//	bool visitsCourse(int CourseId)
//	{
//		for (int i = 0; i < 10; i++)
//		{
//			if (Courses[i] == CourseId)
//				return true;
//		} 
//		return false;
//	} 
//}; 

///* Problem f) */
//void queryStudents(Student* students, int studentsSize, int courseId)
//{
//	for (int i = 0; i < studentsSize; i++)
//	{
//		if (students[i].visitsCourse(courseId))
//		{
//			std::cout << "The student with number " << students[i].getNumber()
//				<< " and name " << students[i].getName()
//				<< " visits the course with ID " << courseId << std::endl;
//		} 
//	} 
//}
//
///* Problem e) */
//void manageCourses(Course* courses, int coursesSize,
//	Student* students, int studentsSize)
//{
//	while (true)
//	{
//		std::cout << "1: Change course data, 2: Query Students, 3: Assign Student to Course, 0:Back" << std::endl;
//		int selection;
//		std::cin >> selection;
//		if (selection == 0)
//			break;
//		switch (selection) {
//		case 1:
//			std::cout << "Index in Course Array (0..9):" << std::endl;
//			int index;
//			std::cin >> index;
//			std::cout << "Course Id (int):" << std::endl;
//			int courseId;
//			std::cin >> courseId;
//			std::cout << "Instructor Name:" << std::endl;
//			char InstructorName[100];
//			std::cin >> InstructorName;
//			std::cout << "Course Room Nr (int):" << std::endl;
//			int courseRoomNr;
//			std::cin >> courseRoomNr;
//
//			stringCopy(courses[index].Instructor, InstructorName);
//			courses[index].Id = courseId;
//			courses[index].RoomNr = courseRoomNr;
//			std::cout << "At index " << index
//				<< " the Course Id is " << courses[index].Id
//				<< " and the Instructor Name is " << courses[index].Instructor
//				<< " and the Room Nr is " << courses[index].RoomNr
//				<< std::endl;
//			break;
//		case 2:
//			std::cout << "Course Id (int):" << std::endl;
//			std::cin >> courseId;
//			queryStudents(students, studentsSize, courseId);
//			break;
//		case 3:
//			std::cout << "Course Id (int):" << std::endl;
//			std::cin >> courseId;
//			std::cout << "Index in Student Array (0..9):" << std::endl;
//			std::cin >> index;
//			students[index].addCourse(courseId);
//			break;
//		default:
//			std::cout << "Wrong input";
//		} 
//	} 
//} 
//
///* Problem e) */
//void manageStudents(Student* students, int studentsSize)
//{
//	while (true)
//	{
//		std::cout << "1: Change student data, 0:Back" << std::endl;
//		int selection;
//		std::cin >> selection;
//		if (selection == 0)
//			break;
//		std::cout << "Index in Student Array (0..9):" << std::endl;
//		int index;
//		std::cin >> index;
//		std::cout << "Student Number:" << std::endl;
//		int studentNumber;
//		std::cin >> studentNumber;
//		std::cout << "Student Name:" << std::endl;
//		char studentName[100];
//		std::cin >> studentName;
//		students[index].setName(studentName);
//		students[index].setNumber(studentNumber);
//		std::cout << "At index " << index
//			<< " the Student Number is " << students[index].getNumber()
//			<< " and the Student Name is " << students[index].getName() << std::endl;
//	}
//}
//
//void main() {
//	Student students[10]; // array for 10 students
//	Course courses[10];// array for 10 courses
//	while (true)
//	{
//		std::cout << "1: Manage Courses, 2: Manage Students, 0:Exit" << std::endl;
//		int selection;
//		std::cin >> selection;
//		if (selection == 0)
//			break;
//		switch (selection) {
//		case 1: manageCourses(courses, 10, students, 10);
//			break;
//		case 2: manageStudents(students, 10);
//			break;
//		default:
//			std::cout << "Wrong input";
//		} 
//	} 
//} 