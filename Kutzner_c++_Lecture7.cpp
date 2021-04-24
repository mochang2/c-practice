#include <iostream>
#include <string> //https://boycoding.tistory.com/178
///use std::string
using namespace std;

void fun(int i, double d)
{
	cout << "func for doubles after integers" << endl;
}
void fun(double d, int i)
{
	cout << "func for integers after doubles" << endl;
}
void fun(int x[])
{
	cout << "func for integer arrays" << endl;
}

void add10(int a);

int count_string(char* s);
int count_string2(char* s);

void* void_fun()
{
	return NULL;
}

int main()
{
	//fun(1.0, 3);
	//fun(41, 21.2);

	/*string a = "45";
	std::string myName("Alex");*/
	
	/*int ab = 5;
	add10(ab);
	cout << ab << endl;*/


	//int* p;
	//p = void_fun();


	/*int abc[2][3] = { {0,1,2},{4,5,6} };
	int* xy[2] = { abc[0],abc[1] };*/


	/*int a = 0;
	int b = 2;
	int& p = a;
	p = b;
	cout << p << endl;
	//변수에 할당 다시 하는거 가능. 포인터도 가능*/


	int length;
	cin >> length;
	int* array = new int[length]();	//초기화
	//int * arrary = new int [length]{11, 22, 33, 44, 55, 66};
	//초기화!! 주의사항 초기화보다 length 길이가 짧으면
	//런타임 에러

	array[0] = 1;
	array[1] = 2;

	delete[] array;	//배열 delete(두 개 이상일 때)


	int fixedArrary[] = { 1,2,3,4,5 }; //ok compile 타임에 결정
	//int* arrary2 = new int[] {1, 2, 3, 4, 5};//x x

	//resizing => 벡터 쓰길 추천

	//delete[] arrary2;


	return 0;
}
void add10(int a)
{
	a += 10;
}

int count_string(char* s)
{
	int n = 0;
	while (*s)
	{
		n++;
		s++;
	}
	return(n);
}
int count_string2(char* s)
{
	char* ptr = s;
	while (*ptr)
		ptr++;

	return ptr - s;
}