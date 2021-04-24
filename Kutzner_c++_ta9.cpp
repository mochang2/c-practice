#include <iostream>
using namespace std;

class Exception
{
public:
	int code;
	Exception(int i) 
	{ 
		cout << "constructor is called" << endl;
		code = i; 
	}
	~Exception() 
	{ 
		cout << "destructor is called" << endl; 
	}
};
void foo()
{
	try {
		throw &Exception(1);
	}
	catch (Exception *e)
	{
		//call by pointer 와 reference 와 value 출력차이
		cout << e->code << endl;
	}
}

int main()
{
	/*int a, b;
	cin >> a >> b;

	try
	{
		if (b == 0)
			throw b;
		cout << "a / b : " << (double)a / (double)b << endl;
	}
	catch (int c)
	{
		cout << "denominator is " << c
			<< " error" << endl;*/
	


	foo();


	return 0;
}