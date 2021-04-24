//#include <iostream>
//using namespace std;
//
//int main()
//{
//	/*int x = -1;
//
//	cout << "Before try\n";
//	try {
//		cout << "Inside try\n";
//		if (x < 0)
//		{
//			throw x;
//			cout << "After throw(Never executed) \n";
//		}
//	}
//	catch (int x)
//	{
//		cout << "Exception Caught \n";
//	}
//
//	cout << "After catch (Will be executed)\n";*/
//
//
//	try
//	{
//		throw 10;
//	}
//	catch (char* excp)
//	{
//		cout << "Caught" << excp;
//	}
//	catch (...)
//	{
//		cout << "Default Exception\n";
//	}
//
//	return 0;
//}

//#include <iostream>
//
//class Exception {
//public:
//	int code;
//	Exception(int i) {
//		code = i;
//	}
//};
//
//void foo() {
//	try {
//		throw Exception(1);
//	}
//	catch (Exception e) {
//		std::cout << e.code;
//	}
//}
//
//void main() {
//	foo();
//}


#include <iostream>
using namespace std;

void fun()
{
	cout << "before throw in fun" << endl;
	throw 5.0;
	//local variable 다 사라짐
	cout << "after throw in fun" << endl;
}

void fun2()
{
	cout << "before throw in fun2" << endl;
	throw 5.0;
	//local variable 다 사라짐
	cout << "after throw in fun" << endl;
}
void fun1()
{
	cout << "before call fun2 (in fun1)" << endl;
	fun2();
	//local variable 다 사라짐
	try
	{

	}
	catch (double d)
	{

	}
	cout << "after throw in fun" << endl;
}

void func()
{
	try
	{
		cout << "before throw in func" << endl;
		throw 5.0;
		cout << "after throw in func(not executed)" << endl;
	}
	catch (double d)
	{
		cout << "d in func()" << endl;
	}
}

void foo() {
	try {
		try {
			throw (double)1;
		}
		catch (int i) {
			std::cout << "inner catch. i = " << i;
		}
	}
	catch (double d) {
		std::cout << "outer catch. d = " << d;
	}
}

void foo1()
{
	try
	{
		cout << "before throw in fun" << endl;
		throw 5.0;
		cout << "after throw in fun" << endl;
	}
	catch (double d)
	{	//rethrowing
		cout << "d in foo1() " << d << endl;
		throw;
	}
	cout << "after try, catch statement in foo1" << endl;
}

class A
{
public:
	A(){cout << "Constructed A object" << endl;}
	~A(){cout << "Destructed A object" << endl;}
};
void foo2()
{
	//A objA;
	A* ptrObjA = new A;	//smartpointer 이용하면 해결됨

	cout << "before throw in fun" << endl;
	throw 5.0;
	cout << "after throw in fun" << endl;

	delete ptrObjA; //bad way. destructor is not called
}

class Exception
{
public:
	int info;
	/*Exception()
	{

	}*/
	Exception(int info) 
	{ 
		cout << "constructor of Exception" << endl;
		this->info = info;
	}
	~Exception()
	{
		cout << "destructor of Exception" << endl;
	}
};
void foo3()
{
	cout << "before throw in foo3" << endl;
	//throw Exception(1);
	throw new Exception(3);
	//throw &Exception(2);
	cout << "after throw in foo3" << endl;
}

class SubException :public Exception
{
public:
	SubException(int info) :Exception(5)
	{
		cout << "subconstructor" << endl;
		this->info = info;
	}
	~SubException()
	{
		cout << "subdestructor" << endl;
	}
};
void foo4()
{
	cout << "before throw in foo3" << endl;
	throw SubException(3);
	cout << "after throw in foo3" << endl;
}

int main()
{
	/* Exception 기초 */
	/*try
	{
		int i = 1;
		cout << "before throw" << endl;
		//throw i;
		throw 2.0;
		throw 3.0f;
		cout << "after throw(not excuted)" << endl;
		//no going back even if it is not executed
	}
	catch (int j)
	{
		cout << "after catch int " << j << endl;
	}
	catch (double d)
	{
		cout << "after catch double " << d << endl;
	}
	catch (...)
	{//catch every exception but don't know what
		//이 뒤에는 새로운 catch 문 못 옴
		cout << "after catch except int, double" << endl;
	}

	cout << "\nout of try, catch statement" << endl;*/

	/*while (true)
	{
		try
		{
			double d;
			cin >> d;
			cout << "before throw" << endl;
			if (d > 5.0f)
				throw d;
			cout << "after throw" << endl;
			break;
		}
		catch (double d)
		{
			cout << "after catch double " << d << endl;
		}
	}
	cout << "\nout of try, catch statement" << endl;*/


	/* using fun() */
	/*try
	{
		cout << "before call fun()" << endl;
		fun();
		cout << "after call fun()" << endl;
	}
	catch (double d)
	{
		cout << "catched double " << d << endl;
	}
	cout << "\nout of try, catch statement" << endl;*/


	/* using fun1(), fun2()*/
	/*try
	{
		cout << "before call fun1()" << endl;
		fun1();
		cout << "after call fun()" << endl;
	}
	catch (double d)
	{
		cout << "catched double " << d << endl;
	}
	cout << "\nout of try, catch statement" << endl;*/


	/* using func() */
	/*try
	{
		cout << "before call func()" << endl;
		func();
		cout << "after call func()" << endl;
	}
	catch (double d)
	{
		cout << "d in main()" << endl; //not executed
	}*/


	/* nested try-catch, using foo() */
	//foo();


	/* using foo1 */
	/*try
	{
		cout << "before call foo1()" << endl;
		foo1();
		cout << "after call foo1()" << endl;
	}
	catch (double d)
	{
		cout << "d in main() " << d << endl;
	}
	cout << "out of try, catch statement in main" << endl;*/


	/* using class A, foo2() */
	/*try
	{
		cout << "before call foo2()" << endl;
		foo2();
		cout << "after call foo2()" << endl;
	}
	catch (double d)
	{
		cout << "d in main() " << d << endl;
	}
	cout << "after try, catch statement in main" << endl;*/


	/* using exception class, foo3() */
	//debug로 따라가보자 2번 소멸자 불러지는 이유
	//try
	//{	//only one constructor, two destructors
	//	cout << "before call foo3()" << endl;
	//	foo3();
	//	cout << "after call foo3()" << endl;
	//}
	////catch (Exception e/* Exception &e*/)
	////{
	////	cout << "exception with " << e.info << endl;
	////}
	//catch (Exception *e)
	//{
	//	cout << "exception with " << e->info << endl;
	//	//there is no delete
	//}
	////catch (Exception * e)// Exception &e
	////{	//throw with &
	////	cout << "exception with " << e->info << endl;
	////}
	//cout << "out of try-catch statement in main" << endl;


	/* using SubException ,foo4() */
	/*try
	{
		cout << "before call foo4()" << endl;
		foo4();
		cout << "after call foo4()" << endl;
	}
	catch (Exception &e)
	{
		cout << "exception with " << e.info << endl;
	}
	cout << "after catch" << endl;

	SubException ex(4);
	cout << ex.info << endl;*/

	return 0;
}