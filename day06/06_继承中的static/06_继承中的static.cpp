#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class A
{
public:
	static int a;
};

class B :public A
{

};

int A::a = 0;

int main()
{
	A a1;
	A a2;
	cout << "a = " << a1.a << endl;
	cout << "a = " << a2.a << endl;

	cout << "------------------" << endl;

	B::a = 100;

	B b1;
	B b2;
	cout << "a = " << b1.a << endl;
	cout << "a = " << b2.a << endl;

	return 0;
}