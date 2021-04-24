
#include <iostream>

using namespace std;

static int chang = 10;
int chang2 = 20;


void sub();		//함수는 선언만 해도 됨. default가 extern

int main()
{
	//int chang3 = 100;

	cout << "before sub()" << endl;
	sub();
	//extern int chang2;
	chang2++;
	cout << chang2 << endl;

	return 0;
}
