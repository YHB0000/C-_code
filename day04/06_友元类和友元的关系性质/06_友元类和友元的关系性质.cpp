#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

/*
	1. 友元关系不能被继承
	2. 友元关系是单向的，不具有交换性。
	3. 友元关系不具有传递性
*/

class A
{
public:
	friend class B;
	A(int x)
	{
		this->x = x;
	}
	void show()
	{
		B objb(10);
		// 友元关系是单向的
		//cout << "B_x = " << objb.x << endl;
		cout << "A_x = " << this->x << endl;
	}
	~A()
	{
		cout << "~A()" << endl;
	}

private:
	int x;
};

class B
{
public:
	B(int x)
	{
		this->x = x;
	}
	void show()
	{
		A obja(10);
		cout << "A_x = " << obja.x << endl;
		cout << "B_x = " << this->x << endl;
	}
	~B()
	{
		cout << "~B()" << endl;
	}

private:
	int x;
};

int main()
{

	B b(1);
	b.show();

}