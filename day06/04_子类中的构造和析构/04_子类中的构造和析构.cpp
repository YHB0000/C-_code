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

class Child:public Parent
{
public:
	Child()
	{
		cout << "------ init() ------" << endl;
		this->y = 0;
	}
	//Child(int x, int y)
	Child(int x, int y) :Parent(x)
	{
		cout << "------ init(int x, int y) ------" << endl;
		//this->x = x;
		this->y = y;
	}
	~Child()
	{
		cout << "------ bey ------" << endl;
	}
	int y;
};

int main()
{

	Child c(10, 20);
	c.show();
	
	return 0;
}