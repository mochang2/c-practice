
#include <iostream>

using namespace std;

int add2nums(int firstnum, int secondnum)
{
	int sum;
	sum = firstnum + secondnum;

	firstnum = secondnum = 0;

	return sum;
}

int main()
{
	/*int y, a, b;

	cout << "Enter two numbers" << endl;
	cin >> a >> b;		//두 개 연속으로 입력받을 수 있음.

	y = add2nums(a, b);

	cout << "a is " << a << endl;
	cout << "b is " << b << endl;
	cout << "y is " << y << endl;*/


	/*for (int a = 1; a > 1; a++)
	{
		cout << a << endl;
		if (a > 10)
			break;
	}*/


	/* Practice 05 */
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 4 - i; j++)
			cout << " ";
		for (int j = 0; j <= i; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;


	/* Practice 06 */
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i ; j++)
			cout << " ";
		for (int j = 0; j < 5 - i; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;

	
	/* Practice 07 */
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 0; j < 5 - i; j++)
			cout << " ";
		for (int j = 0; j < 2 * i - 1; j++)
			cout << "*";
		cout << endl;
	}
	cout << endl;


	/* Practice 08 */
	for (int i = 0; i < 5; i++)
	{
		{
			for (int j = 0; j < 5 - i; j++)
				cout << " ";
			for (int j = 0; j < i + 1; j++)
				cout << "* ";
		}
		cout << endl;
	}
	for (int i = 0; i < 5; i++)
	{
		{
			for (int j = 0; j < i + 1; j++)
				cout << " ";
			for (int j = 0; j < 5 - i; j++)
				cout << "* ";
		}
		cout << endl;
	}


	return (0);

}

