#include <iostream>
using namespace std;

int main()
{
	int a[] = { 0,1,2 };
	int b[] = { 4,6,7 };
	int* x[2];
	x[0] = a;
	x[1] = b;
	cout << *(x[1]) << endl;	//4
	cout << *(x[1] + 2) << endl;	//7
	//index값이 2가 더해지는 것이고 주소값은 2*4=8값이 더해지는 것
	cout << *(*(x + 1) + 1) << endl;	//6
	cout << *(*(x)+1) << endl;		//1


	//ppt 슬라이드
	//과제 변형해서 나오면 맞출 수 있게
	//ta랑 한 거 x(버블소트,별찍기)
	//++i, i++같은거 헷갈리지 않고
	//cout값 전체를 써야할지 하나만 써야할지 잘 보라.


	return 0;
}
