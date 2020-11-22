#include <iostream>

using namespace std;

int func(int x, int y)
{
	cout << "x, y = " << x << ", " << y << endl;
	return 0;
}

int func(int x, int y, int z)
{
	cout << "x, y, z = " << x << ", " << y << ", " << z << endl;
	return 0;
}

// 1. 定义一种函数类型
typedef int(MY_FUNC)(int, int);

// 2. 定义一个指向一种函数类型的指针类型
typedef int(*MY_FUNC_P)(int, int);

int main()
{
	// 1.
	MY_FUNC* fp1 = NULL;
	fp1 = func;
	fp1(1, 0);

	// 2.
	MY_FUNC_P fp2 = NULL;
	fp2 = func;
	fp2(0, 1);

	// 3.
	int(*fp3)(int, int) = NULL;
	fp3 = func;
	fp3(1, 1);

	// 4. 在给函数指针赋值的时候，是会发生函数重载匹配的，在调用函数指针的时候，所调用的函数就已经固定了
	int(*fp4)(int, int, int) = NULL;
	fp4 = func;
	fp4(1, 0, 1);
}

