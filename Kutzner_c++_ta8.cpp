#include <iostream>
#include <string>
using namespace std;
//정적으로 할당되는 것은 compile할 때 위치를 알 수 있음
//가상 함수, 동적 할당은 알 수 없음. dynamic binding
//이용해야함. (->)

class Figure
{
public:
	virtual string draw() = 0;
};
class Triangle : public Figure
{
public:
	virtual string draw() { return "Draw Triangle";}
};
class Square :public Figure
{
public:
	virtual string draw() { return "Draw Square"; }
};
class Circle :public Figure
{
public:
	virtual string draw() { return "Draw Circle"; }
};

int main()
{
	/* 1 */
	Figure* F1 = new Triangle;
	Figure* F2 = new Square;
	Figure* F3 = new Circle;

	cout << F1->draw() << endl;
	cout << F2->draw() << endl;
	cout << F3->draw() << endl;

	delete F1, F2, F3;

	//Circle* C1 = new Figure;

	return 0;
}
