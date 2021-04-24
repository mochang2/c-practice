#include <iostream>
#include <cstring>
//#define _CRT_SECURE_NO_WARNINGS
using namespace std;

//template<typename T>
//T add(T a, T b)
//{
//	return a + b;
//}

//template<typename T, typename U>
//T add(T a, U b) 
////U add(T a, U b)
//{
//	return a + b;
//}

//template<typename T>
//T add(T a, T b)
//{
//	return a + b;
//}
//template<>
//char* add(char* a, char* b)
//{
//	char* addchar = new char[strlen(a) + strlen(b) + 2];
//	strcpy_s(addchar, sizeof(a), a);
//	strcat_s(addchar, sizeof(b), b);
//	return addchar;
//	/*strcat_s(a, sizeof(b), b);
//	return a;*/
//}

//void cpy(char* dest, size_t num, const char* src, size_t data)
//{
//	if (data > num)
//		return;
//	num = -1;
//	while (++num < data)
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = '\0';
//}

int main()
{
	/*int a = 10, b = 20;
	int c = add(a, b);
	double d = 1.1, e = 2.2;
	double f = add(d, e);

	cout << c << "  " << f << endl;*/


	/*double d = add((double)35, 2.4);
	cout << d << endl;
	double e = add(35, 2.4);
	cout << e << endl;
	double f = add(2.4, 35);
	cout << f << endl;
	char g = add('a', 34);
	cout << g << endl;*/
	
	
	/*char str1[10] = "h";
	char str2[5] = "ello";
	char* str3 = add(str1, str2);
	cout << str3 << endl;*/


	/*char arr[20] = "ABCDEFG";
	char arr1[20];
	cpy(arr1, sizeof(arr1), arr, 5);
	cout << arr1 << endl;*/

	return 0;
}
