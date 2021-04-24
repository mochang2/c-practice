
#include <iostream>

using namespace std;

//static int chang = 10;
int chang2 = 20;		//초기화 위치는 전역변수면 
//어디든 상관없지만 한번만 해줘야 함.

void sub();		//함수는 선언만 해도 됨. default가 extern

int main()
{
	sub();
	//extern int chang2;
	int chang2 = 0;
	chang2++;
	cout << chang2 << endl;

	//int chang3 = 0;

	return 0;
}
