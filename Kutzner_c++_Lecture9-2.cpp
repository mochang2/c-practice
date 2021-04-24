#include <iostream>
using namespace std;

class Line
{
private:
	double length;
public:
	Line();
	Line(double);
	~Line();
	double getLine();
	void setLine(double);
};
//https://www.tutorialspoint.com/cplusplus/cpp_constructor_destructor.htm
//Initialization lists to initialize fields
Line::Line():length(0.0f)
{
	cout << "Object is being created. length = "
		<< length << endl;
}
Line::Line(double len):length(len)
{
	cout << "Object is being created. length = "
		<< length << endl;
}
Line::~Line()
{
	cout << "Finished line with length = " << length << endl;
}
double Line::getLine()
{
	return length;
}
void Line::setLine(double len)
{
	length = len;
}

int main()
{
	Line object1;
	object1.setLine(10.0);
	cout << object1.getLine() << endl;

	{
		Line object2(5.0);
		cout << object2.getLine() << endl;
	}

	return 0;
}
