#include <iostream>
#include <math.h>

using namespace std;

int combination(int n, int r);
int factorial(int n);
int combination2(int n, int r);

int arr3[4] = { 1,2,3,4 };
void swap(int* a, int* b);
void permutNumbers(int n);
void permutNumbers2(int arr[], int n, int end);
void prof_permut(int a[], int start, int end);
void prof_swap(int& a, int& b);

int sum_down(unsigned int x);
int sum_down2(int x);
int sum_down3(const int x);
int sum_down4(const int x);
int sum_down5(int x);
int prof_sum_dows_for(int x);

void asterist(int x)
{
	if (x > 1)
	{
		asterist(x / 2);
		asterist(x / 2);
	}
	cout << "*";
}

int main()
{
	/* 1. combination */
	/*int n, r;
	cout << "Input integers n & r" << endl;
	cin >> n >> r;
	cout << "Combination C(" << n << "," << r << ") is "
		<< combination(n, r) << endl;
	cout << combination2(n, r) << endl;*/


	/*2. permutation*/
	//permutNumbers
	/*cout << arr3[0] <<arr3[1] <<arr3[2] <<arr3[3]
		<<"\n";
	permutNumbers(4);
	cout << "\n\n";

	//permutNumbers2
	cout << "Input integer n to produce permutation"
		<< "using 1 to n" << endl;
	int end;
	cin >> end;
	int* parr = NULL;
	parr = (int*)malloc(sizeof(int) * end);

	for (int i = 0; i < end; i++)
		parr[i] = i + 1;
	//cout << parr[0] << parr[1] << parr[2] << endl;

	permutNumbers2(parr, end, end);

	free(parr);*/

	/*int a[4] = { 1,2,3 };
	prof_permut(a, 0, 2);*/


	/* 3. sum_down */
	/*//cout << sum_down(5) << endl;
	//cout << pow(2, 20) << endl;
	cout << sum_down2(5) << endl;
	cout << sum_down3(5) << endl;
	cout << sum_down4(5) << endl;
	cout << sum_down5(5) << endl;*/


	//asterist(5);


	return 0;
}

int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}
int combination(int n, int r)
{
	int numerator, denominator;
	numerator = factorial(n);
	denominator = factorial(n - r) * factorial(r);

	return numerator / denominator;
}
int combination2(int n, int r)
{
	int numerator = 1, denominator = 1;
	for (int i = n - r + 1; i <= n; i++)
		numerator *= i;
	for (int i = 1; i <= r; i++)
		denominator *= i;
	
	return numerator / denominator;
}

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
void permutNumbers(int n)
{
	size_t arr_size = sizeof(arr3) / sizeof(arr3[0]);//==n

	if (n == 1)
	{
		for (int i = 0; i < arr_size; i++)
			cout << arr3[i];
		cout << " ";
	}
	for (int j = 0; j < n; j++)
	{
		swap(arr3[j], arr3[n - 1]);
		permutNumbers(n - 1);
		swap(arr3[j], arr3[n - 1]);
	}
}
void permutNumbers2(int arr[], int n, int end)
{
	if (n == 1)
	{
		for (int i = 0; i < end; i++)
			cout << arr[i];
		cout << " ";
	}
	for (int j = 0; j < n; j++)
	{
		swap(arr[j], arr[n - 1]);
		permutNumbers2(arr, n - 1, end);
		swap(arr[j], arr[n - 1]);
	}
}
void prof_permut(int a[], int start, int end)
{	//start and end indicate index
	if (start == end)
	{
		for (int j = 0; j <= end; j++)
			cout << a[j];
		cout << " ";
	}
	else
	{
		for (int j = start; j <= end; j++)
		{
			prof_swap(a[start], a[j]);
			prof_permut(a, start + 1, end);
			prof_swap(a[start], a[j]);
		}
	}
}
void prof_swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

int sum_down(unsigned int x)		
{
	//b. rewrited this function.
	//c.d.e.  x를 double unsigned int const int로 바꿔도 괜찮냐? 
	if (x >= 0)
	{
		x = x - 1;
		int y = x + sum_down(x);
		return y + sum_down(x);
	}
	else
		return 1;
}
int sum_down2(int x)
{
	if (x >= 0)
	{
		//x = x - 1;
		//return x + sum_down2(x) + sum_down2(x);
		return x - 1 + sum_down2(x - 1) + sum_down2(x - 1);
	}
	else
		return 1;
}
int sum_down3(const int x)
{
	if (x >= 0)
		return x - 1 + 2 * sum_down3(x - 1);
	else
		return 1;
}
int sum_down4(const int x)
{
	int sum = 0;
	for (int i = 1; i <= x; i++)
		sum += (int)pow(2, i);
	return sum - (x - 1);
}
int sum_down5(int x)
{
	int sum = 0;
	int i,k = 1;
	for (i = 1; i < x + 2; i++)
		k *= 2;
	return k - (--i);
}

int prof_sum_dows_for(int x)
{
	if (x < -1)
		return 1;

	int sum = 1;
	for (int i = -1; i < x; i++)
		sum = i + 2 * sum;
	return sum;
}
//main()
//{
//	int i = 0; 
//  while (true)
//		if (prof_sum_down_for(i) < 1000000)
//			i++;
//		else
//			break;
//	cout << i << endl;
//}

/* c. In result, int sum_down(int x) has the same
outcome, compared to int sum_down(double x).
This is because the calculations inside the sum_down
fucntion are performed between integers, which is
the return type of the sum_down function.
Regardless of this outcome, it is not OK to swtich 
the type of the parameter x to double, because
there can be data loss when casting from "double" to
"int". (when if the calculations inside the 
sum_function are changed to be performed between
integers and floats*/
/* d. When I execute int sum_down(unsigned int x),
I met run-time error. This is because x was out of
bounds(0~255) when it becomes -1. This is called
underflow. However, when I execute int sum_down3
(unsigned int x) or int sum_down4(unsigned int x),
functions work well. Therefore, it is not OK to swtich
the type of the parameter x to unsigned int when
using sum_down function, whereas sum_down3,4 is OK*/
/* e. int sum_down(const int x) is not OK whereas
from sum_down2(const int x) to sum_down4(const int x)
is OK. (x-1), sum_down2(x-1) in sum_down2, (x-1) in
sum_down3 or i<x+2 in sum_down4 uses x but
does not change the value of x. However, x=x-1 in
sum_down changes the value of x, which is the lvalue.
Therefore, it is not OK to switch the type of the
parameter x to const int when using sum_down function
(while sum_down 2,3,4 is OK).*/