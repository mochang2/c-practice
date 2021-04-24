
#include <iostream>

#define SQUARE(x) (x * x)
#define SQUARE2(x) ((x)*(x))

//int k;		//error because it was declared before.
int main()
{
	/*int int1, int2, sum;

	std::cout << "Enter first integer" << std::endl;
	std::cin >> int1;
	std::cout << "Enter second integer" << std::endl;
	std::cin >> int2;
	sum = int1 + int2;
	std::cout << "Sum is " << sum << std::endl;*/
	//std::cout << "\"ha\"";

	/*long double a;
	a = 2.0 / 3.0 / 4.0 + 5.0;
	std::cout << a <<std::endl;*/

	/*int i = 5;
	std::cout << SQUARE(i + 2) << std::endl;	//17
	std::cout << SQUARE(5 + 2) << std::endl;	//17
	std::cout << SQUARE2(i + 2) << std::endl;	//49*/


//	double fahr, celcius;
//	
//	std::cout << "Enter Temperature \
//in Fahrenheit\n";
//	std::cin >> fahr;
//
//	celcius = (fahr - 32.0) * 5.0 / 9.0;
//	std::cout << fahr << " fahrenheit is "  //길면 enter 가능
//		      << celcius << " Celcius" << std::endl;
	

	/*const int five = 5;
	int i = 7;
	float x = 7.0;
	std::cout << five + i / 2 << std::endl;
	std::cout << five + x / 2 << std::endl;


	int j = 0;
	bool b = i <= j;
	std::cout << "Boolian false is " << b << std::endl;*/


	/*int j = 7;
	int k = 2;
	double d = (double)j / (double)k;
	std::cout << d << std::endl;*/


	//if (!0) //;
	//	std::cout << "!0 is true." << std::endl;


	/*if (true)
	{	//else하고 짝을 누가 지어지는지 생각해보기
		if (false)
			std::cout << "true branch";
	}
	else
		std::cout << "false branch";*/


	/*
	if (k==0)
		std::cout <<"selection 0"<<std::endl;
	else if (k==1)
		std::cout <<"selection 1"<<std::endl;
	else if (k==2)
		std::cout <<"selection 2"<<std::endl;
	else
		std::cout <<"otherwise"<std::endl;
		
		
	switch (k)
	{
		case 0:
			std::cout <<"selection 0"<<std::endl;
			break;
		case 1:
			std::cout <<"selection 1"<<std::endl;
			break;
		case 2:
			std::cout <<"selection 2"<<std::endl;
			break;
		default:
			std::cout <<"otherwise"<<std::endl;
			break;     //there is no need to use break at default
	}*/


	/*int i = 0;
	while (i < 10)
	{
		int j = i++;	//++i;
		std::cout << j << std::endl;
		std::cout << i << std::endl;
	}*/


	/*int i = 0;
	do 
	{
		i++;
		std::cout << i << std::endl;
	} while (i < 10);*/


	/*for (int i = 1; i < 100; i++) 
	{
		std::cout << "Checking " << i << std::endl;
		if (i % 2)
			std::cout << i << " is odd" << std::endl;
		else
			std::cout << i << " is even" << std::endl;
	}*/

	
	/*//int j;
	//int k;
	for (int j = 0,	float k = 0;;)	//k 전에 type 선언 x
	{
		std::cout << j << std::endl;
		j++;
		if (j > 10)
			break;
	}*/


	/*bool b = true;
	bool k = true;
	int x = 1;
	int y = 1;
	if (b && k)		// if (x && y) 도 가능 0 제외하고 다 true
		std::cout << "true branch" << std::endl;
	else
		std::cout << "false branch" << std::endl;
	
	//if ((b && k) = 1);	error(b&&k가 lvalue가 아님!)*/


	/*int a = !!4;
	std::cout << a << std::endl;*/

	/*using namespace std;
	float a = 1.3f;
	char b = 'A';
	if (a)
		cout << "true" << endl;

	if (b)
		cout << "true" << endl;*/

	
	
	return 0;	//means OK
}
