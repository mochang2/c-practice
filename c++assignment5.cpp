#include <iostream>
using namespace std;

/* Exercise 1 */
//void fun() {
//	try {
//		cout << "FA\n";
//		//throw 3; // line 5
//		//throw (double)5.0; // line 5
//		//throw 'c'; // line 5
//		//throw true; // line 5
//		cout << "BA\n";
//	}
//	catch (int i) {
//		cout << "FCA " << i << "\n";
//	}
//	catch (char c) {
//		cout << "FCB " << c << "\n";
//		throw;
//	}
//	cout << "BC\n";
//}
//int main()
//{
//	try {
//		cout << "A\n";
//		fun();
//		cout << "B\n";
//	}
//	catch (int i) {
//		cout << "C " << i << "\n";
//	}
//	catch (double d) {
//		cout << "D " << d << "\n";
//	}
//	catch (...) {
//		cout << "E\n";
//	}
//	cout << "F\n";
//
//	return 0;
//}

/* Exercise 2 */
//class Exception
//{
//public:
//	int error;
//	Exception() :error(0) { cout << "AAA" << endl; }
//	Exception(int showerror) :error(showerror) {}
//	~Exception() { cout << "ZZZ" << endl; }
//};
//
//void fun() {
//	try {
//		cout << "FA\n";
//		throw Exception();
//		//or
//		//throw Exception(4);
//		cout << "BA\n";
//	}
//	catch (int i) {
//		cout << "FCA " << i << "\n";
//	}
//	catch (char c) {
//		cout << "FCB " << c << "\n";
//		throw;
//	}
//	cout << "BC\n";
//}
//int main()
//{
//	try {
//		cout << "A\n";
//		fun();
//		cout << "B\n";
//	}
//	catch (int i) {
//		cout << "C " << i << "\n";
//	}
//	catch (double d) {
//		cout << "D " << d << "\n";
//	}
//	catch (Exception & e){
//		cout << "Ex " << e.error << "\n";
//	}
//	catch (...) {
//		cout << "E\n";
//	}
//	cout << "F\n";
//
//	return 0;
//}

/* new operator을 사용하면 positive, negative aspects
of such an object-reference based approach for
exception handling?*/
/*Negative aspects: Before meeting catch, 
delete is not executed and ‘new Exception’ leaves 
the scope(This means losing memory address). 
This causes memory leak.
Positive aspects: Depending on the situation, 
I can allocate as much memory as I want. 
Whenever I want to resize the memory, 
I can do although memory was already allocated. */
//class Exception
//{
//public:
//	int error;
//	Exception() :error(0) {
//		cout << "AAA" << endl;
//	}
//	Exception(int showerror) :error(showerror) {
//		cout << "AAA2" << endl;
//	}
//	~Exception(){
//		cout << "ZZZ" << endl;
//	}
//};
//
//void fun() {
//	try {
//		cout << "FA\n";
//		throw new Exception(4);
//		cout << "BA\n";
//	}
//	catch (int i) {
//		cout << "FCA " << i << "\n";
//	}
//	catch (char c) {
//		cout << "FCB " << c << "\n";
//		throw;
//	}
//	cout << "BC\n";
//}
//int main()
//{
//	try {
//		cout << "A\n";
//		fun();
//		cout << "B\n";
//	}
//	catch (int i) {
//		cout << "C " << i << "\n";
//	}
//	catch (double d) {
//		cout << "D " << d << "\n";
//	}
//	catch (Exception *e) {
//		cout << "Ex " << e->error << "\n";
//		delete e;
//	}
////catch (Exception * e) { // catch by pointer
////	e->what(); // equal to (*e).what();
////	delete e; // if we forget this, we have a memory leak
////	// the risk of this memory leak can be avoided via catching by reference
////}
////void what( void ) {
////	std::cout << "Problem has code: " << code << std::endl;
////	}
//	catch (...) {
//		cout << "E\n";
//	}
//	cout << "F\n";
//
//	return 0;
//}