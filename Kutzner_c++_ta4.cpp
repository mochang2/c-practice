#include <iostream>
#include <stdlib.h>

using namespace std;

void swap(int&, int&);
void bubble_sort(int arr[], int n);

int main()
{
	/*int rats = 101;
	int& rodents = rats;

	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;

	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;
	cout << "\n";
	//포인터와 다르게 두 개는 같은 주소
	int updates = 6;
	int* p_updates;
	p_updates = &updates;

	cout << &updates << " " << &p_updates << endl;*/


	/*int yams[3] = { 7,8,9 };
	int yamcost[3] = { 20,30,5 };

	cout << "Total yams= " << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with" << yams[1] << " yamcost";
	cout << yamcost[1] << " cents per yam. " << endl;

	int total = yams[0] * yamcost[0] + yams[1] * yamcost[1]
		+ yams[2] * yamcost[2];
	cout << "The total yam expense is " 
		<< total << " cents." << endl;

	cout << "Size of yams array = " << sizeof(yams);//sizeof yams
	cout << " bytes." << endl;
	cout << "Size of one element = " << sizeof(yams[0]);
	//sizeof yams[0]
	cout << " bytes." << endl;
	cout << "\n";*/


	//int arr[5] = { 1,2,3,4,5 };
	//arr++;
	//포인터로 받아서 연산은 가능하지만 배열 자체는 연산 x


	/*int foo;
	int* x;
	foo = 123;
	x = &foo;
	cout << x << endl;	//얘 자체는 주소*/


	/* exercise */
	/*int n;
	int* arr = NULL;
	cout << "Enter number of element you want to store: ";
	cin >> n;
	arr = (int*)malloc(sizeof(int) * n);
	cout << arr[0] << endl;
	//arr = (int*)calloc(n, sizeof(int));
	//calloc은 할당된 공간을 0으로 초기화해줌 malloc과 달리
	//중간에 n이 10으로 바뀐다고 하면
	//realloc(arr, sizeof(int)*10); 이렇게 선언하면 됨.
	cout << "Enter array values:" << endl;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	cout << "After Bubble sort the array is:" << endl;
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	free(arr);*/


	return 0;
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}
void bubble_sort(int arr[], int end)
{
	for (int i = 0; i < end; i++)
	{
		for (int j = 0; j < end - 1 - i; j++)
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
	}
}
