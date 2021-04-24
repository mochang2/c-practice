#include <iostream>
using namespace std;

void fun(int &a)	//& 없이 받는 것도 가능
{
	cout << a << endl;
	a = 6;
}
void fun(int a[])	//overload //double reference 불가(&추가)
{
	cout << a[3] << endl;
	a[3] = 13;
}

int bad_read_array(int a[]) {
	int i = 0;
	int val;

	do {
		cout << "Enter next value, 0 to end\n";

		cin >> val;

		if (val) a[i++] = val;

	} while (val);

	return(i);
}

void func(int a[], int ele_per_row)
{
	cout << a[(ele_per_row * 1) + 1] << endl;
}

int main()
{
	/*int arr[4] = { 1,2, };
	arr[2] = arr[0] + arr[1];
	cout << arr[2] << endl;

	char s[] = "Some text";
	cout << sizeof(s) << endl;
	cout << sizeof(arr) << endl;
	cout << sizeof(arr[0]) << endl;*/


	/*int x[4];	//array definition
	//x={9, 7, 5, 2}; 이렇게 한번에 initialize 안됨.
	//definition에 하는 게 아니면*/


	/*int x[] = { 9,7,5,2 };
	fun(x[2]); //able
	cout << x[2] << endl;

	fun(x);
	cout << x[3] << endl;*/


	/*int blah = 123;	// initialize so we can see if it gets whacked
	int a[3];
	int foo = 22;		// initialize so we can see if it gets whacked
	int cnt;

	// Let user fill up the array
	cnt = bad_read_array(a);

	cout << "Got " << cnt << " Values\n";
	//  print out the array

	for (int i = 0; i < cnt; i++)
		cout << "A[" << i << "] = " << a[i] << endl;

	// now print out foo and blah

	cout << "foo is " << foo << " (should be 22)" << endl;
	cout << "blah is " << blah << " (should be 123)" << endl;
	*/
	

	/*multidimensional array*/
	/*int x[4][3] = { 1,2,3,4 };	//array 꽉 안 채움
	cout << (long long)(x[0] + 1) << endl;	//address
	cout << ((long long)x) + 1 << endl;	//address
	cout << (long long)(x + 1) << endl;	//address
	cout << *(x[0] + 1) << endl;	//value
	cout << (long long)x[0] << endl;
	cout << *x[0] << endl;
	cout << x[1][0] << endl;*/


	/*int x[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	func(x, 3);
	cout << (3 * 1) + 1 << endl;*/


	/*int arr[] = { 1,2,3,4,5,6 };
	int n = *(&arr + 1) - arr;
	cout << n << endl;*/


	return 0;
}
