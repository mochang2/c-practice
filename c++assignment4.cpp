#include <iostream>
using namespace std;

/* Exercise 1 */
//class A
//{
//public:
//	int x;
//	A* objARef;
//	void a()
//	{
//		//objA.			//not defined
//		objARef->y;
//	}
//private:
//	int y;
//protected:
//	int z;
//};
//class B :public A
//{
//public:
//	A objA;		//objA.x, y, z는 B에 없으므로 셋다 접근 불가
//	void print_classB()
//	{
//		cout << z << endl;
//		cout << objA.x << endl;
//		//cout << objA.y << endl;
//		//cout << objA.z << endl;   //!!!
//		cout << objARef->x << endl;
//		//cout << objARef->z << endl;	//!!!
//		
//		B::objB->x;
//		B::objB->z;
//
//		//objB.  //not defined
//	}
//	B* objB;
//	
//};
//class C
//{
//public:
//	A objA;
//	A* objARef;
//	B objB;
//	void print_classC()
//	{
//		objA.x;
//		cout << objB.x << endl;
//	}
//	void adf()
//	{
//	}
//};

/* Exercise 2 */
//class Object
//{
//public:
//	static int counter;
//	Object()
//	{
//		cout << "Object has been constructed" << endl;
//		counter++;
//	}
//	static void main();
//};
//int Object::counter = 0;
//class Character: public Object
//{
//public:
//	//char ch;
//	Character()
//	{
//		cout << "Character has been constructed" << endl;
//		ch = NULL;
//	}
//	char operator+(Character& cha)
//	{
//		return (this->ch + cha.ch) % 128;
//	}
//	//Character(char c) { // question 2
//	//	ch = c;
//	//}
//	//Character operator+(Character c) // question 3
//	//{
//	//	return Character((char)((int)ch + (int)c.ch) % 25 + 65);
//	//}
//	void set_ch(char ch)
//	{
//		this->ch = ch;
//	}
//	char get_ch()
//	{
//		return ch;
//	}
///* Q6 */
//protected:
//	char ch;
//};
//class Digit: public Character
//{
//public:
//	Digit()
//	{
//		cout << "Digit has been constructed" << endl;
//	}
//	int operator+(Digit& i)
//	{
//		return ((this->ch - '0') + (i.ch - '0')) % 10;
//	}
//	//Digit(char c){this->ch = c; } // constructor
//	//Digit operator+(Digit digit)
//	//{
//	//	return Digit(((ch - '0') + (digit.ch - '0')) % 10 + '0');
//	//}
//};
//class Letter: public Character
//{
//public:
//	Letter()
//	{
//		cout << "Letter has been constructed" << endl;
//	}
//};
//class Vowel: public Letter
//{
//public:
//	Vowel()
//	{
//		cout << "Vowel has been constructed" << endl;
//	}
//};
//class Consonant: public Letter
//{
//public:
//	Consonant()
//	{
//		cout << "Consonant has been constructed" << endl;
//	}
//};
//void Object::main()
//{
//	Object obj1, obj2;
//	Character cha1, cha2;
//	Digit digit1, digit2;
//	Letter letter1, letter2;
//	Vowel vowel1, vowel2;
//	Consonant conso1, conso2;
//
//	cout << counter << endl;
//}
//
//int main()
//{
//	/* Exercise 1 */
//	//C abc;
//	//abc.objB.objA.x = 1;
//	//B bbb;
//	////bbb.objA.z = 2;
//
//
//	/* Exercise 2 */
//	/*Character a, b;
//	a.ch = 'z';
//	b.ch = 'b';
//	cout << a + b << endl;
//	cout << (int)a.ch << endl;
//	cout << (int)b.ch << endl;
//	cout << (int)'\\' << endl;
//	cout << (122 + 98) % 128 << endl;*/
//
//
//	/*Digit a , b;
//	a.ch = '18';
//	b.ch = '14';
//	cout << a + b << endl;*/
//
//
//	/*Vowel a, e, i, o, u;
//	Consonant b, c, d, f;
//	cout << a.counter << endl;
//	cout << f.counter << endl;*/
//	
//
//	Character a, b, c, d, e;
//	a.set_ch('a');
//	b.set_ch('b');
//	c.set_ch('c');
//	d.set_ch('d');
//	e.set_ch('e');
//	cout << a.get_ch() << endl;
//	cout << b.get_ch() << endl;
//	cout << c.get_ch() << endl;
//	cout << a.counter << endl;
//
//
//	//Object::main();
//
//
//	return 0;
//}