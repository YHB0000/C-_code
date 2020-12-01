#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

class Parent
{
public:
	Parent()
	{
		cout << "------ init() ------" << endl;
		this->x = 0;
	}
	Parent(int x)
	{
		cout << "------ init(int x) ------" << endl;
		this->x = x;
	}
	void show()
	{
		cout << "x = " << this->x << endl;
	}
	~Parent()
	{
		cout << "------ bey ------" << endl;
	}
	int x;
};

class Child :public Parent
{
public:
	Child()
	{
		cout << "------ init() ------" << endl;
		this->x = 0;
	}
	Child(int p_x, int c_x) :Parent(p_x)
	{
		cout << "------ init(int p_x, int c_x) ------" << endl;
		this->x = c_x;
	}
	void show()
	{
		cout << "p_x = " << Parent::x << endl;
		cout << "c_x = " << this->x << endl;
	}
	~Child()
	{
		cout << "------ bey ------" << endl;
	}
	int x;
};

int main()
{
	Child c(10, 20);
	c.show();
	return 0;
}