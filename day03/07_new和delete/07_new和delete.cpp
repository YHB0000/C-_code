#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

// C 语言
void test1()
{
	int* a;
	a = (int*)malloc(sizeof(int));
	*a = 4;
	if (a != NULL)
	{
		free(a);
		a = NULL;
	}

	int* arr = (int*)malloc(sizeof(int) * 10);
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	if (arr != NULL)
	{
		free(arr);
		arr = NULL;
	}
}

// C++ 语言
void test2()
{
	int* p = new int;
	*p = 4;
	if (p != NULL)
	{
		delete p;
		p = NULL;
	}

	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	if (arr != NULL)
	{
		delete [] arr;
		arr = NULL;
	}
}

int main()
{
	test1();
	cout << "------------------" << endl;
	test2();
}